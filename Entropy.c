clc;
clear all;
p[0.125,0.25,0.625];
x=length(p);
hx=0;
for i=1:x;
hx=hx+p(i)*log2(1/p(i));
end
disp("Entropy of x");
disp(hx);

p=[0.25,0.3,0.45];
y=length(p);
hy=0;
for i=1:y;
hy=hy+p(i)*log2(1/p(i);
end 
disp("Entropy of y");
disp(hy);

z=[3/40,1/40,1/20,3/20,1/20,1/8,1/8,3/8];
[n,m]=size(z);
hx_y=0;
for i=1:n
for j=1:m
hx_y=hx_y+z(i,j)*log2(1/z(i,j));
end
disp("joint entropy of x_y"
disp(hx_y);
yx[3/5,15,15,1/5,3/5,1/5,1/5,1/5,3/5];
[a,b]=size(yx);
hyx=0;
for i=1:a
for i=1:b;
hyx=hyx+z(i,j)*log2(1/xy(i,j));

end
end
disp('Entropy of x/y');
disp(hxy);

s[0.6,0.2,0.2,0.25,0.6,0.2,0.2,0.2,0.6];
[m,n]=size(s);
hs=0;
I=hy-hyx;
disp(I);
I=hx+hy-hx_y;
disp(I);