import java.awt.*;
import java.io.*;
import java.util.*;

public class simple extends Canvas implements Serializable{
private String msg;
public simple(){
msg="Hello World";
setSize(300,150);
setBackground(Color.blue);
}
public void setMsg(String msg){
this.msg=msg;
}
public String getMsg(){
return msg;
}
public void paint(Graphics g){
g.drawString(msg,10,10);
}
}