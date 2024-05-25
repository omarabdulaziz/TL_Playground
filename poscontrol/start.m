% loads TargetLink demo model 'poscontrol'
model = 'poscontrol';

disp (' ');
disp (['Working directory is ' pwd]);
disp (' ');
disp (['Loading TargetLink demo file "' model '" ...']);
disp (' ');

m = 0.01;
d = 0.5;

fprintf('\nPlant parameters:\n',m);
fprintf('  Mass    m = %g\n',m);
fprintf('  Damping d = %g\n',d);

Kp = 2.0;
Ki = 0.2;
tSample = 0.001;

fprintf('\nController parameters:\n',m);
fprintf('  Kp = %4.1f\n',Kp);
fprintf('  Ki = %4.1f\n',Ki);
fprintf('Sample time is %6.3f\n\n',tSample);

% measurement nonlinearity
tab_in  = [-12:12]';
tab_out = sin(tab_in/8);
tab_out = max(tab_in)*tab_out/max(tab_out);
level = 3;

% open Simulink model
open_system(model);

clear model