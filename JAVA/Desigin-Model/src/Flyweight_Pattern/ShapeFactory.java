/**  
* <p>Title: ShapeFactory.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 17, 2019  
* @version 1.0  
*/  
package Flyweight_Pattern;

import java.util.HashMap;

import Factory_Design.Shape;

/**
 * @author aogui
 *
 */
public class ShapeFactory {
	private static final HashMap<String,Shape> circleMap = new HashMap();
	
	public static Shape getCircle(String color) {
		Circle circle = (Circle)circleMap.get(color);
		if(circle == null) {
			circle = new Circle(color);
			circleMap.put(color,circle);
			System.out.println("Creating circle of color : " + color);
		}  
		return circle;
	}
}
