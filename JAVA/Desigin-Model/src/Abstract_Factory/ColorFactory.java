/**  
* <p>Title: ColorFactory.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 17, 2019  
* @version 1.0  
*/  
package Abstract_Factory;

/**
 * @author aogui
 *
 */
public class ColorFactory extends AbstractFactory{

	@Override
	Color getColor(String color) {
		// TODO Auto-generated method stub
		if(color.equalsIgnoreCase("blue")) {
			return new Blue();
		}
		else if(color.equalsIgnoreCase("red")) {
			return new Red();
		}
		return null;
	}

	@Override
	Shape getShape(String shape) {
		// TODO Auto-generated method stub
		return null;
	}
	
}
