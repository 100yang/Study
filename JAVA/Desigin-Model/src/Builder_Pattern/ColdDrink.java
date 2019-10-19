/**  
* <p>Title: ColdDrink.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 19, 2019  
* @version 1.0  
*/  
package Builder_Pattern;

/**
 * Description
 */
public abstract class ColdDrink implements Item{
	public Packing packing() {
		return new Bottle();
	}
	public abstract double price();
}
