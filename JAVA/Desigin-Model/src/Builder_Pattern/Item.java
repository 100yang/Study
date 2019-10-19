/**  
* <p>Title: Item.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 19, 2019  
* @version 1.0  
*/  
package Builder_Pattern;

/**
 * Description:食物和包装的接口
 */
public interface Item {
	public String name();
	public Packing packing();
	public double price();
}
