/**  
* <p>Title: ShapeFactory.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 16, 2019  
* @version 1.0  
*/  
package Abstract_Factory;

/**
 * @author aogui
 *
 */
public class ShapeFactory extends AbstractFactory{

	@Override
	Color getColor(String color) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	Shape getShape(String shape) {
		// TODO Auto-generated method stub
		if(shape.equalsIgnoreCase("rect")) {
			return new Rect();
		}
		else if(shape.equalsIgnoreCase("Square")) {
			return new Square();
		}
		return null;
	}
	
}
