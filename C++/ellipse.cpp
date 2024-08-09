#include <graphics.h> 
int main() 
{ 
    int gd = DETECT, gm; 
    int x = 300, y = 200; 

    int start_angle = 0; 
    int end_angle = 360; 

    int x_rad = 100;
    int y_rad = 50;

    initgraph(&gd, &gm, ""); 

    setcolor(GREEN);
    ellipse(x, y, start_angle, end_angle, x_rad, y_rad);

    getch(); 
    closegraph(); 
    return 0; 
}
//#include <SFML/System.hpp>
//
//int main()
//{
//    try
//    {
//        sf::RenderWindow window(sf::VideoMode(500, 500), "Ellipse Drawing");
//
//        int x_center = 250;
//        int y_center = 250;
//        int Rx = 150;
//        int Ry = 100;
//
//        int Rx2 = Rx * Rx;
//        int Ry2 = Ry * Ry;
//        int twoRx2 = 2 * Rx2;
//        int twoRy2 = 2 * Ry2;
//        int p;
//        int x = 0;
//        int y = Ry;
//        int px = 0;
//        int py = twoRx2 * y;
//
//        p = Ry2 - (Rx2 * Ry) + (0.25 * Rx2);
//
//        while (px < py && !window.isClosed())
//        {
//            x++;
//            px += twoRy2;
//            if (p < 0)
//            {
//                p += Ry2 + px;
//            }
//            else
//            {
//                y--;
//                py -= twoRx2;
//                p += Ry2 + px - py;
//            }
//            window.clear();
//            window.draw(sf::CircleShape(x, 4, sf::Color::White));
//            window.draw(sf::CircleShape(-x, -y, 4, sf::Color::White));
//            window.draw(sf::CircleShape(x, y, 4, sf::Color::White));
//            window.draw(sf::CircleShape(-x, y, 4, sf::Color::White));
//            window.display();
//        }
//
//        p = Ry2 * (x + 0.5) * (x + 0.5) + Rx2 * (y - 1) * (y - 1) - Rx2 * Ry2;
//
//        while (y > 0 && !window.isClosed())
//        {
//            y--;
//            py -= twoRx2;
//            if (p > 0)
//            {
//                p += Rx2 - py;
//            }
//            else
//            {
//                x++;
//                px += twoRy2;
//                p += Rx2 - py + px;
//            }
//            window.clear();
//            window.draw(sf::CircleShape(x, y, 4, sf::Color::White));
//            window.draw(sf::CircleShape(-x, -y, 4, sf::Color::White));
//            window.draw(sf::CircleShape(x, y, 4, sf::Color::White));
//            window.draw(sf::CircleShape(-x, y, 4, sf::Color::White));
//            window.display();
//        }
//
//        sf::sleep(sf::milliseconds(5000));
//    }
//    catch (const std::exception& e)
//    {
//        std::cerr << "Error: " << e.what() << '\n';
//    }
//
//    return 0;
//}
// C program for the above approach 

//#include<conio.h>
//#include<graphics.h>
//#include<stdio.h>
//
//// Driver Code 
//int main() {  
//    int gd=DETECT,gm; 
//    
//    initgraph(&gd,&gm,"C:\TC\BGI"); 
//    
//    // Ground Outline 
//    rectangle(100,50,1200,550); 
//    
//    // Coloring Green 
//    setfillstyle(SOLID_FILL,GREEN); 
//    floodfill(150,150,15); 
//    
//    // Ground Middle Line 
//    line(650,50,650,550); 
//    line(656,50,656,550); 
//    
//    // Coloring White 
//    setfillstyle(SOLID_FILL,WHITE); 
//    floodfill(652,150,15); 
//    
//    // Mid Circles 
//    circle(653,300,60); 
//    circle(653,300,65); 
//    circle(653,300,10); 
//    
//    // Outer Rectangle Left 
//    rectangle(100,200,250,400); 
//    rectangle(100,205,245,395); 
//    
//    // Inner Rectangle Left 
//    rectangle(100,230,200,370); 
//    rectangle(100,235,195,365); 
//    
//    // Arc Left Side 
//    arc(250,300,270,90,40); 
//    arc(250,300,270,90,35); 
//    
//    // Outer Rectangle Right 
//    rectangle(1200,200,1050,400); 
//    rectangle(1200,205,1055,395); 
//    
//    // Inner Rectangle Right 
//    rectangle(1200,230,1100,370); 
//    rectangle(1200,235,1105,365); 
//    
//    // Arc Right Side 
//    arc(1051,300,90,270,40); 
//    arc(1051,300,90,270,35); 
//    
//    // Coloring All White 
//    floodfill(714,300,15); 
//    floodfill(592,300,15); 
//    floodfill(657,300,15); 
//    floodfill(645,300,15); 
//    floodfill(247,300,15); 
//    floodfill(197,300,15); 
//    floodfill(287,300,15); 
//    floodfill(1053,300,15); 
//    floodfill(1103,300,15); 
//    floodfill(1013,300,15); 
//    
//    getch(); 
//    closegraph(); 
//}