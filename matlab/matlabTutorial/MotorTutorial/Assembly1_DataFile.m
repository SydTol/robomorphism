% Simscape(TM) Multibody(TM) version: 7.0

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(8).translation = [0.0 0.0 0.0];
smiData.RigidTransform(8).angle = 0.0;
smiData.RigidTransform(8).axis = [0.0 0.0 0.0];
smiData.RigidTransform(8).ID = '';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [0 0 0];  % mm
smiData.RigidTransform(1).angle = 0;  % rad
smiData.RigidTransform(1).axis = [0 0 0];
smiData.RigidTransform(1).ID = 'B[MMKXA8EfbNtMkHH6B:-:]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [0 0 0];  % mm
smiData.RigidTransform(2).angle = 0;  % rad
smiData.RigidTransform(2).axis = [0 0 0];
smiData.RigidTransform(2).ID = 'F[MMKXA8EfbNtMkHH6B:-:]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [-43.100000000000001 -0 0];  % mm
smiData.RigidTransform(3).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(3).axis = [1 0 0];
smiData.RigidTransform(3).ID = 'B[MLeZHIkh5pzrdEW3N:-:MzIJeiYIOIvsbqEbS]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [134.44999999999999 -0 -15];  % mm
smiData.RigidTransform(4).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(4).axis = [1 0 0];
smiData.RigidTransform(4).ID = 'F[MLeZHIkh5pzrdEW3N:-:MzIJeiYIOIvsbqEbS]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [0 0 17.5];  % mm
smiData.RigidTransform(5).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(5).axis = [1 0 0];
smiData.RigidTransform(5).ID = 'B[MMKXA8EfbNtMkHH6B:-:MTRs4YWKraIb20M7n]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [-140.84999999999999 -0 7.5];  % mm
smiData.RigidTransform(6).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(6).axis = [1 0 0];
smiData.RigidTransform(6).ID = 'F[MMKXA8EfbNtMkHH6B:-:MTRs4YWKraIb20M7n]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [140.84999999999999 -0 30];  % mm
smiData.RigidTransform(7).angle = 0;  % rad
smiData.RigidTransform(7).axis = [0 0 0];
smiData.RigidTransform(7).ID = 'B[MTRs4YWKraIb20M7n:-:MzIJeiYIOIvsbqEbS]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [-134.44999999999999 -0 15];  % mm
smiData.RigidTransform(8).angle = 0;  % rad
smiData.RigidTransform(8).axis = [0 0 0];
smiData.RigidTransform(8).ID = 'F[MTRs4YWKraIb20M7n:-:MzIJeiYIOIvsbqEbS]';


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(4).mass = 0.0;
smiData.Solid(4).CoM = [0.0 0.0 0.0];
smiData.Solid(4).MoI = [0.0 0.0 0.0];
smiData.Solid(4).PoI = [0.0 0.0 0.0];
smiData.Solid(4).color = [0.0 0.0 0.0];
smiData.Solid(4).opacity = 0.0;
smiData.Solid(4).ID = '';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.25071491299999998;  % kg
smiData.Solid(1).CoM = [8.3690599999999993 -0 7.9456370000000005];  % mm
smiData.Solid(1).MoI = [14.574 1838.018 1839.9370000000001];  % kg*mm^2
smiData.Solid(1).PoI = [0 -14.802 0];  % kg*mm^2
smiData.Solid(1).color = [0.615686275 0.811764706 0.929411765];
smiData.Solid(1).opacity = 1.000000000;
smiData.Solid(1).ID = 'JHD*:*fa0eb4852c1f3a55b668d8bb';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.078459893200000005;  % kg
smiData.Solid(2).CoM = [4.0916599999999992 -0 7.5];  % mm
smiData.Solid(2).MoI = [4.1200000000000001 60.984999999999999 62.162999999999997];  % kg*mm^2
smiData.Solid(2).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(2).color = [0.615686275 0.811764706 0.929411765];
smiData.Solid(2).opacity = 1.000000000;
smiData.Solid(2).ID = 'JHD*:*04731d3b44de3d5cfbdfdc5e';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.23992451300000001;  % kg
smiData.Solid(3).CoM = [8.3480710000000009 -0 7.0343209999999994];  % mm
smiData.Solid(3).MoI = [14.01 1610.114 1611.8790000000001];  % kg*mm^2
smiData.Solid(3).PoI = [0 14.089 0];  % kg*mm^2
smiData.Solid(3).color = [0.615686275 0.811764706 0.929411765];
smiData.Solid(3).opacity = 1.000000000;
smiData.Solid(3).ID = 'JHD*:*5c1ff0bfc55afbda94a12e54';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 0.062622740800000007;  % kg
smiData.Solid(4).CoM = [-0 0 6.4867840000000001];  % mm
smiData.Solid(4).MoI = [10.350999999999999 10.350999999999999 17.451000000000001];  % kg*mm^2
smiData.Solid(4).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(4).color = [0.615686275 0.811764706 0.929411765];
smiData.Solid(4).opacity = 1.000000000;
smiData.Solid(4).ID = 'JHD*:*293cfc444dd065cf789e9acc';


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(3).Rz.Pos = 0.0;
smiData.RevoluteJoint(3).ID = '';

smiData.RevoluteJoint(1).Rz.Pos = 0.32616988972529182;  % deg
smiData.RevoluteJoint(1).ID = '[MLeZHIkh5pzrdEW3N:-:MzIJeiYIOIvsbqEbS]';

smiData.RevoluteJoint(2).Rz.Pos = -0.1763828720664202;  % deg
smiData.RevoluteJoint(2).ID = '[MMKXA8EfbNtMkHH6B:-:MTRs4YWKraIb20M7n]';

smiData.RevoluteJoint(3).Rz.Pos = -0.49806655954717977;  % deg
smiData.RevoluteJoint(3).ID = '[MTRs4YWKraIb20M7n:-:MzIJeiYIOIvsbqEbS]';

