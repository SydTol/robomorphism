
function [ctrl_1, ctrl_2, ctrl_3] = SimpleImpedanceCtrl(dimensions, angles, Dd, Kd, xd, xd_dot)

ang1 = angles(1);
ang2 = angles(2);
ang3 = angles(3);
L1 = dimensions(1);
L2 = dimensions(2);
L3 = dimensions(3);


xPos = (L1*cos(ang1) + L2*cos(ang1 + ang2) + L3*cos(ang1 + ang2 + ang3));
yPos = (L1*sin(ang1) + L2*sin(ang1 + ang2) + L3*sin(ang1 + ang2 + ang3));

%diff of x and y formulae
x_dot = double(- L2*sin(ang1 + ang2) - L1*sin(ang1) - L3*sin(ang1 + ang2 + ang3));
y_dot = double(L2*cos(ang1 + ang2) + L1*cos(ang1) + L3*cos(ang1 + ang2 + ang3));
%Calculated J and then the transpose 
J_T = [ - L2*sin(ang1 + ang2) - L1*sin(ang1) - L3*sin(ang1 + ang2 + ang3), L2*cos(ang1 + ang2) + L1*cos(ang1) + L3*cos(ang1 + ang2 + ang3), 0;
                - L2*sin(ang1 + ang2) - L3*sin(ang1 + ang2 + ang3),                L2*cos(ang1 + ang2) + L3*cos(ang1 + ang2 + ang3), 0;
                                      -L3*sin(ang1 + ang2 + ang3),                                      L3*cos(ang1 + ang2 + ang3), 0 ];


pos = [xPos; yPos; 0] ;
pos_dot = [x_dot; y_dot; 0];



%controlTorque = subs(J_T) * (Kd(xd - pos) + Dd(xd_dot - pos_dot));

controlTorque =  J_T*(Kd * (xd - pos) + Dd*(xd_dot - pos_dot));
ctrl_1 = double(controlTorque(1));

ctrl_2 = double(controlTorque(2));
ctrl_3 = double(controlTorque(3));
