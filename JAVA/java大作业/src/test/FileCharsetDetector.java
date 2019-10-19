/**  
* <p>Title: test6.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018��12��20��  
* @version 1.0  
*/  
package test;

/**  
* <p>Title: test6</p>  
* <p>Description: �õ��ļ��ı��� 
* @author 100110100  
* @date 2018��12��20��  
*/

import info.monitorenter.cpdetector.io.ASCIIDetector;  
import info.monitorenter.cpdetector.io.CodepageDetectorProxy;  
import info.monitorenter.cpdetector.io.JChardetFacade;  
import info.monitorenter.cpdetector.io.ParsingDetector;  
import info.monitorenter.cpdetector.io.UnicodeDetector;  
  
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.nio.charset.Charset;  
import java.io.BufferedInputStream;  
import java.io.BufferedOutputStream;  
  
public class FileCharsetDetector {  
  
    /** 
             *      ���õ�������Դ��cpdetector��ȡ�ļ������ʽ. 
     * @param filePath 
     * @return 
     */  
    public static String getFileEncode(File file) {  
        /** 
         * <pre> 
         * 1��cpDetector������һЩ���õ�̽��ʵ����,��Щ̽��ʵ�����ʵ������ͨ��add�����ӽ���, 
         * ��:ParsingDetector�� JChardetFacade��ASCIIDetector��UnicodeDetector.  
         * 2��detector���ա�˭���ȷ��طǿյ�̽����,���Ըý��Ϊ׼����ԭ��.  
         * 3��cpDetector�ǻ���ͳ��ѧԭ���,����֤��ȫ��ȷ. 
         * </pre> 
         */  
        CodepageDetectorProxy detector = CodepageDetectorProxy.getInstance();  
          
        detector.add(new ParsingDetector(true));  
        detector.add(UnicodeDetector.getInstance());  
        detector.add(JChardetFacade.getInstance());//�ڲ������� chardet.jar����  
        detector.add(ASCIIDetector.getInstance());  
          
        Charset charset = null;  
        try {  
            charset = detector.detectCodepage(file.toURI().toURL());  
        } catch (Exception e) {  
            e.printStackTrace();  
        }  
          
        //Ĭ��ΪGBK  
        String charsetName = "GBK";  
        if (charset != null) {  
            if (charset.name().equals("US-ASCII"))
                charsetName = "ISO_8859_1";  
            else if(charset.name().equals("UTF-8"))
            	charsetName = "UTF-8";
            else if(charset.name().equals("Unicode"))
            	charsetName = "Unicode";
            else
                charsetName = charset.name();  
        }  
        return charsetName;  
    }  
    /**
     * <div>
     * ���õ�������Դ��cpdetector��ȡ�ļ������ʽ.<br/>
     * --1��cpDetector������һЩ���õ�̽��ʵ����,��Щ̽��ʵ�����ʵ������ͨ��add�����ӽ���,
     *   ��:ParsingDetector�� JChardetFacade��ASCIIDetector��UnicodeDetector. <br/>
     * --2��detector���ա�˭���ȷ��طǿյ�̽����,���Ըý��Ϊ׼����ԭ��. <br/>
     * --3��cpDetector�ǻ���ͳ��ѧԭ���,����֤��ȫ��ȷ.<br/>
     * </div>
     * @param filePath
     * @return �����ļ��������ͣ�GBK��UTF-8��UTF-16BE��ISO_8859_1
     * @throws Exception 
     */
    public static String getFileEncode(String filePath) throws Exception {
        CodepageDetectorProxy detector = CodepageDetectorProxy.getInstance();
        /*ParsingDetector�����ڼ��HTML��XML���ļ����ַ����ı���,
         * ���췽���еĲ�������ָʾ�Ƿ���ʾ̽����̵���ϸ��Ϣ��Ϊfalse����ʾ��
        */
        detector.add(new ParsingDetector(false));
        /*JChardetFacade��װ����Mozilla��֯�ṩ��JChardet����������ɴ�����ļ��ı���ⶨ��
         * ���ԣ�һ���������̽�����Ϳ�����������Ŀ��Ҫ������㻹�����ģ������ٶ�Ӽ���̽������
         * ���������ASCIIDetector��UnicodeDetector�ȡ�
        */
        detector.add(JChardetFacade.getInstance());
        detector.add(ASCIIDetector.getInstance());
        detector.add(UnicodeDetector.getInstance());
        Charset charset = null;
        File file = new File(filePath);
        try {
            //charset = detector.detectCodepage(file.toURI().toURL());
            InputStream is = new BufferedInputStream(new FileInputStream(filePath));
            charset = detector.detectCodepage(is, 8);
        } catch (Exception e) {
            e.printStackTrace();
            throw e;
        }
 
        
        //Ĭ��ΪGBK  
        String charsetName = "GBK";  
        if (charset != null) {  
            if (charset.name().equals("US-ASCII"))
                charsetName = "ISO_8859_1";  
            else if(charset.name().equals("UTF-8"))
            	charsetName = "UTF-8";
            else if(charset.name().equals("Unicode"))
            	charsetName = "Unicode";
            else
                charsetName = charset.name();  
        }  
        return charsetName;
    }
}
