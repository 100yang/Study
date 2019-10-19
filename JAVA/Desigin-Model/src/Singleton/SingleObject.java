/**  
* <p>Title: SingleObject.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 17, 2019  
* @version 1.0  
*/  
package Singleton;

/**
 * @author aogui
 *
 */
public class SingleObject {
	//创建对象 唯一创建
	private static SingleObject instance = new SingleObject();
	//私有化实例函数
	private SingleObject() {};
	//获取唯一可用的对象
	public static SingleObject getinstance() {
		return instance;
	}
	public void ShowMessage() {
		System.out.println("Hello World");
	}
}
