
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.geom.AffineTransform;

import javax.swing.JOptionPane;
import javax.swing.JPanel;

 class Test extends JPanel {
    Test()
    {
        super(null);
        setOpaque(true);
        setBackground(Color.WHITE);
        setPreferredSize(new Dimension(200,200));
    }
    @Override
    protected void paintComponent(Graphics g1) {
        super.paintComponent(g1);
        Rectangle r= new Rectangle(5,5,getWidth()-10,getHeight()-10);
        double cx= r.getCenterX();
        double cy= r.getCenterY();
        Graphics2D g=(Graphics2D)g1;
        g.setColor(Color.BLACK);
        AffineTransform old= g.getTransform();
        for(double zoom=0.9; zoom>=0.5; zoom-=0.1)
        {
            AffineTransform tr2= new AffineTransform(old);
            tr2.translate(
                    (this.getWidth()/2) - (r.getWidth()*(zoom))/2,
                    (this.getHeight()/2) - (r.getHeight()*(zoom))/2
            );
            tr2.scale(zoom,zoom);
            g.setTransform(tr2);
            tr2.translate(cx/zoom,cy/zoom);
            g.setTransform(tr2);
            g.draw(r);
            g.setTransform(old);
        }
    }


    public static void main(String[] args) {
        JOptionPane.showMessageDialog(null, new Test());
    }
}