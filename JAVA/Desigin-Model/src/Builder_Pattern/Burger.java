/**  
* <p>Title: Burger.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 19, 2019  
* @version 1.0  
*/  
package Builder_Pattern;

/**
 * Description:实现item接口的抽象类
 */
public abstract class Burger implements Item{
	public Packing packing() {
		return new Wrapper();
	}
	public abstract double price();
}
