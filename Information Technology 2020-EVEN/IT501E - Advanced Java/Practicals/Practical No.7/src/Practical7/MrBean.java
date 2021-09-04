package Practical7;
import java.io.Serializable;
public class MrBean implements Serializable{
    private String pilote;
    private String starfighter;
    private String droid;
    public MrBean()
    {}
     public void setPilote(String pilote)
     {
     this.pilote=pilote;
     }
     public String getPilote()
     {
     return pilote;
     }
     
      public void setStarFighter(String starfighter)
     {
     this.starfighter=starfighter;
     }
      
      public String getStarFighter()          
     {
     return starfighter;
     }
      
       public void setDroid(String droid)
     {
     this.droid=droid;
     }
       
       public String getDroid()
     {
     return droid;
     }
}


