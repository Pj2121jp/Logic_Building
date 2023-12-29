import java.awt.*; 

class MarvellosFrame
{   
    public MarvellosFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(300,600); // (w,h);
        fobj.setVisible(true);

    }
}

class GUI2
{
    public static void main(String args[])
    {
        MarvellosFrame mobj = new MarvellosFrame("PPA49");
    }

}
