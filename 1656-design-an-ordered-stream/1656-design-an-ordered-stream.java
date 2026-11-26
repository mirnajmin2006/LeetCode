
import java.util.*;

class OrderedStream {
    String[] arr;
    int ptr = 1;

    public OrderedStream(int n) {
        arr = new String[n + 1];
    }

    public List<String> insert(int idKey, String value) {
        arr[idKey] = value;
        List<String> list = new ArrayList<>();

        while (ptr < arr.length && arr[ptr] != null) {
            list.add(arr[ptr]);
            ptr++;
        }

        return list;
    }
}


/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream obj = new OrderedStream(n);
 * List<String> param_1 = obj.insert(idKey,value);
 */