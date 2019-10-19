/**  
* <p>Title: ShapeMaker.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 18, 2019  
* @version 1.0  
*/  
package Facade_Pattern;
import Factory_Design.*;
/**
 * Description:
 * 创建一个外观类。
 */
public class ShapeMaker {
	private Shape rect;
	private Shape square;
	
	public ShapeMaker() {
		rect = new Rect();
		square = new Square();
	}
	public void drawRect() {
		rect.draw();
	}
	public void drawSquare() {
		square.draw();
	}
}
