% loads TarrgetLink demo model 'pipt1'
model = 'pipt1';

disp (' ');
disp (['Working directory is ' pwd]);
disp (' ');
disp (['Loading TargetLink demo file "' model '" ...']);
disp (' ');

% open Simulink model
open_system(model);

clear model