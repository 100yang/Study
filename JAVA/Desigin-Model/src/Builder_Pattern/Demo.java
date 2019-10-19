/**  
* <p>Title: Demo.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 19, 2019  
* @version 1.0  
*/  
package Builder_Pattern;

/**
 * Description:
 * 建造者模式（Builder Pattern）
 * 使用多个简单的对象一步一步构建成一个复杂的对象。
 * 这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。
 * 一个 Builder 类会一步一步构造最终的对象。该 Builder 类是独立于其他对象的。
 * 何时使用：一些基本部件不会变，而其组合经常变化的时候。
 */
public class Demo {
	public static void main(String[] args) {
	      MealBuilder mealBuilder = new MealBuilder();
	 
	      Meal vegMeal = mealBuilder.prepareVegMeal();
	      System.out.println("Veg Meal");
	      vegMeal.showItems();
	      System.out.println("Total Cost: " +vegMeal.getCost());
	 
	      Meal nonVegMeal = mealBuilder.prepareNonVegMeal();
	      System.out.println("\n\nNon-Veg Meal");
	      nonVegMeal.showItems();
	      System.out.println("Total Cost: " +nonVegMeal.getCost());
	   }
}
