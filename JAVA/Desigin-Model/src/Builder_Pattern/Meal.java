/**  
* <p>Title: Meal.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 19, 2019  
* @version 1.0  
*/  
package Builder_Pattern;

import java.util.ArrayList;
import java.util.List;

/**
 * Description
 */
public class Meal {
	private List<Item> items = new ArrayList<Item>();
	
	public void addItem(Item item) {
		items.add(item);
	}
	
	public double getCost() {
		double cost = 0.0;
		for(Item item: items) {
			cost +=  item.price();
		}
		return cost;
	}
	
	public void showItems() {
		for(Item item: items) {
			System.out.print("Item: "+item.name());
			System.out.print(" , Packing : "+item.packing().pack());
			System.out.println(",Price: "+item.price());
		}
	}
}
