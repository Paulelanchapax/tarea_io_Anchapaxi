# tarea_io_Anchapaxi
En este codigo vamos a revisar como funciona el uso de cin y cout, explicado con mis propias palabras,
cout seguido de "<<" nos ayuda a que mostremos algo que queramos decir en la pantalla, no me refiero a que 
solamente vamos a escribir texto, para lo que se usan los simbolos de comillas (") sino que en las pruebas que 
he echo tambien al aniadir cout y "endl" se crea una linea de texto, que finaliza por endl, no debemos olvidarnos de 
usar ";" despues de escribir la linea de codigo. (se entendera mejor en el codigo). Y cin, que nos permite que despues
de escribir la linea de codigo el usuario que ejecuto typee una entrada dependiendo de la variable que definimos anteriormente
osea que si nosotros al inicio de codigo hacemos una variable de entero "int x" (x sera nuestro entero, pero no le pusimos
ningun valor) cuando usamos cin, que va con ">>" en este caso (cin>>x), lo que escriba el usuario se guardara dentro de esa
variable, (se observara mejor en el codigo).
Ejemplificando se usan en main asi: cout<<"lo que quieras decir"<<endl;  

int x;
cout<<"ingresa un valor pa x"<<endl;
cin>>x;
cout<<"ingresaste: "<<x<<" "<<endl;

