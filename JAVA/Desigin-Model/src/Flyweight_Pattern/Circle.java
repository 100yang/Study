/**  
* <p>Title: Circle.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 17, 2019  
* @version 1.0  
*/  
package Flyweight_Pattern;


/**
 * @author aogui
 *
 */
public class Circle implements Factory_Design.Shape {
	private String color;
	private int x;
	private int y;
	private int radius;
	public Circle(String color) {
		this.color = color;
	}
	public void setX(int x) {
		this.x = x;
	}
	public void setY(int y) {
		this.y = y;
	}
	public void setRadius(int r) {
		this.radius = r; 
	}
	@Override
	public void draw() {
		// TODO Auto-generated method stub
	    System.out.println("Circle: Draw() [Color : " + color 
	            +", x : " + x +", y :" + y +", radius :" + radius);
	}

}
