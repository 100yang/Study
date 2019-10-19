/**  
* <p>Title: Factory.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 17, 2019  
* @version 1.0  
*/  
package Abstract_Factory;

/**
 * @author aogui
 * <p>Description:</p>
 */
public class Factory_Producer {
	public  AbstractFactory getFactory(String choice) {
		if(choice.equalsIgnoreCase("shape")) {
			return new ShapeFactory();
		}
		else if(choice.equalsIgnoreCase("color")) {
			return new ColorFactory();
		}
		return null;
	}
}
