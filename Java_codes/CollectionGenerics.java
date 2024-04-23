import java.util.ArrayList;
import java.util.List;

class Box<T> {
    private List<T> items = new ArrayList<>();

    public void addItem(T item) {
        items.add(item);
    }

    public T getItem(int index) {
        if (index >= 0 && index < items.size()) {
            return items.get(index);
        }
        return null;
    }
}

public class CollectionGenerics {
    public static void main(String[] args) {
        // Create a Box to store integers
        Box<Integer> intBox = new Box<>();
        intBox.addItem(10);
        intBox.addItem(20);

        // Create a Box to store strings
        Box<String> stringBox = new Box<>();
        stringBox.addItem("Hello");
        stringBox.addItem("World");

        // Retrieve and print items from the boxes
        System.out.println("IntBox items:");
        for (int i = 0; i < intBox.getItemCount(); i++) {
            System.out.println(intBox.getItem(i));
        }

        System.out.println("\nStringBox items:");
        for (int i = 0; i < stringBox.getItemCount(); i++) {
            System.out.println(stringBox.getItem(i));
        }
    }
}
