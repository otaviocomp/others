using Gadfly
draw(SVG("output.svg", 8inch, 5inch), plot([sin, cos], 0, 25))
