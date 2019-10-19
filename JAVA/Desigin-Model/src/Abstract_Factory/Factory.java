/**  
* <p>Title: Factory.java</p>  
* <p>Description: This is a test for Design-Model</p>  
* <p>Copyright: Copyright (c) 2019</p>    
* @author 100110100  
* @date Apr 17, 2019  
* @version 1.0  
*/  
package Abstract_Factory;

import java.util.Scanner;

/**
 * @author aogui
 * Description:抽象工厂模式（Abstract Factory Pattern）
 * 是围绕一个超级工厂创建其他工厂。
 * 该超级工厂又称为其他工厂的工厂。
 * 这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。
 * 在抽象工厂模式中，
 * 接口是负责创建一个相关对象的工厂，不需要显式指定它们的类。
 * 每个生成的工厂都能按照工厂模式提供对象。
 * 意图：提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类。
 * 主要解决：主要解决接口选择的问题。
 * 何时使用：系统的产品有多于一个的产品族，而系统只消费其中某一族的产品。
 * 如何解决：在一个产品族里面，定义多个产品。
 * 关键代码：在一个工厂里聚合多个同类产品。
 */
public class Factory {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		String str = cin.next();
		//获取形状工厂
		AbstractFactory af = new Factory_Producer().getFactory(str);
		System.out.println("Please input the shape you want to input:");
		str = cin.next();
		Shape sp1 = af.getShape(str);
		sp1.draw();
		System.out.println("");
		//获取颜色工厂
		System.out.println("First Please input the 'color' ");
		str = cin.next();
		AbstractFactory af1 = new Factory_Producer().getFactory(str);
		System.out.println("Then Please input the color you want to input:");
		str = cin.next();
		Color color1 = af1.getColor(str);
		color1.fill();
	}
}
