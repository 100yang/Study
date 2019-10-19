/**  
* <p>Title: ShapeFactory.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 16, 2019  
* @version 1.0  
*/  
package Factory_Design;

/**
 * Description:
 * 创建一个工厂，生成基于给定信息的实体类的对象。
 *
 */
public class ShapeFactory {
	public Shape getShape(String type){
		if(type.equalsIgnoreCase("rect")) {
			return new Rect();
		}
		else if(type.equalsIgnoreCase("Square")) {
			return new Square();
		}
		else
			return null;
		
	}
}
