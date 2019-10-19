/**  
* <p>Title: Observer.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 20, 2019  
* @version 1.0  
*/  
package Observer_Pattern;

/**
 * Description
 */
public abstract class Observer {
	protected Subject subject;
	public abstract void update();
}
