
function [ctrl_1, ctrl_2, ctrl_3] = SimpleImpedanceCtrl(dimensions, angles, Dd, Kd, xd, xd_dot)

syms ang1 ang2 ang3 L1 L2 L3

xFormula = L1*cos(ang1) + L2*cos(ang1 + ang2) + L3*cos(ang1 + ang2 + ang3);
yFormula = L1*sin(ang1) + L2*sin(ang1 + ang2) + L3*sin(ang1 + ang2 + ang3);

x_dotFormula = diff(xFormula);
y_dotFormula = diff(yFormula);

h = [xFormula yFormula 0];
J = jacobian(h, [ang1 ang2 ang3]);

J_T = transpose(J);

ang1 = angles(1);
ang2 = angles(2);
ang3 = angles(3);
L1 = dimensions(1);
L2 = dimensions(2);
L3 = dimensions(3);

pos = [subs(xFormula); subs(yFormula); 0] ;
pos_dot = [subs(x_dotFormula); subs(y_dotFormula); 0];


controlTorque = subs(J_T) * (Kd(xd - pos) + Dd(xd_dot - pos_dot));
ctrl_1 = controlTorque(1);
ctrl_2 = controlTorque(2);
ctrl_3 = controlTorque(3);

