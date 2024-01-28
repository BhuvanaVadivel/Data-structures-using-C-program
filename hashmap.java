//collections

//collections
import java.util.HashMap;
import java.util.Map;

public class HasMap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//create HashMap using keys and values with <>=Gendrics
		//creating object for map
		Map<Integer,String> hash=new HashMap();
		//Insertion()
		//Key-values user Define value
		hash.put(1,"AI");
		hash.put(2,"ML");
		hash.put(3,"CSD");
		
		//Assigning the key for Hashing
		System.out.println("key value 1: "+hash.get(2));
        System.out.println("key value 1: "+hash.get(3));
		
		//Print all the values of key
		System.out.println("HashMap: "+hash);
		//Deletion
		hash.remove(1);
		//Print the value after remove()
		System.out.println("After Removal of hash: "+hash);
		
	}

}