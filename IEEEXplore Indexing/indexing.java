// Don't place your source in a package
import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.function.ToIntFunction;

public class Main {
    private static LinkedList<String> currentTags = new LinkedList<>();
    private static HashSet<String> stops;
    private static ArrayList<String> indexes;
    private static HashMap<String,Integer> Sw;
    private static int L = 0;
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

        stops = new HashSet<>(Arrays.asList(in.readLine().split(";")));
        indexes = new ArrayList<>(Arrays.asList(in.readLine().split(";")));
        Sw = new HashMap<>();
        for (String ind : indexes) {
            Sw.put(ind,0);
        }

        ArrayList<String> out = new ArrayList<>();
        String last = null;
        while (true) {
            last = in.readLine();
            if (last == null)
                break;

            elaborate(last);
        }
        List<Map.Entry<String,Integer>> list = new LinkedList<>(Sw.entrySet());
        list.sort((e1, e2) -> {
            int cmp = Integer.compare(e1.getValue(), e2.getValue());
            if (cmp != 0)
                return -cmp;

            return e1.getKey().compareTo(e2.getKey());
        });
        String name;
        int num = -1;
        for (int i = 0; i < 3; i++) {
            Map.Entry<String,Integer> e = list.get(i);
            name = e.getKey();
            num = e.getValue();

            System.out.printf("%s: %f%n", name, 100*((double)num/L));
        }
        int i = 3;
        while (i < list.size() && list.get(i).getValue() == num) {
            System.out.printf("%s: %f%n", list.get(i).getKey(), 100*((double)num/L));
            i++;
        }
    }

    private static void elaborate(String str) {
        boolean isTagOpened = false;
        boolean isTagClosing = false;
        StringBuilder tag = new StringBuilder();
        StringBuilder wordbui = new StringBuilder();
        int i = 0;

        char[] ca = str.toCharArray();

        while (i < ca.length) {
            if (ca[i] == '<') {
                isTagOpened = true;
                tag.setLength(0); // delete

                if (ca[++i] == '/') {
                    isTagClosing = true;
                    i++;
                }
                tag.setLength(0);
                while (ca[i] != '>') {
                    tag.append(ca[i++]);
                }

                if (!isTagClosing) {
                    currentTags.push(tag.toString());
                }
                else {
                    currentTags.pop();
                }

                isTagClosing = false;
                isTagOpened = false;
                i++;
                continue;
            }

            wordbui.setLength(0);
            while ((ca[i] >= 'a' && ca[i] <= 'z') || (ca[i] >= 'A' && ca[i] <= 'Z') || ca[i] == '\'' || ca[i] == ',' || ca[i] == '.' || ca[i] == '?' || ca[i] == '!') {
                if ((ca[i] >= 'a' && ca[i] <= 'z') || (ca[i] >= 'A' && ca[i] <= 'Z') || ca[i] == '\'')
                    wordbui.append(Character.toLowerCase(ca[i]));

                i++;
                if (i == ca.length)
                    break;
            }
            String word = wordbui.toString();
            if (word.length() < 4) {
                if (word.isEmpty())
                    i++;
                continue;
            }


            if (!currentTags.contains("title") && !currentTags.contains("abstract") && !currentTags.contains("body"))
                continue;

            if (stops.contains(word))
                continue;

            L++;
            Sw.computeIfPresent(word, (k,v) -> v+getWeight());
        }
    }

    private static int getWeight() {
        if (currentTags.contains("title"))
            return 5;
        if (currentTags.contains("abstract"))
            return 3;
        if (currentTags.contains("body"))
            return 1;

        return -1000;
    }


}
