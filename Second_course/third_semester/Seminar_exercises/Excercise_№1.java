import java.util.Scanner;
import java.text.DecimalFormat;


public class Main {
    public static void main(String[] args) {

//        EXERCISE 1

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number: ");
        int a = sc.nextInt();
        System.out.println("Enter second number: ");
        int b = sc.nextInt();

        if (a > b) {
            System.out.println(a + " is greater than " + b);
        } else if (b > a) {
            System.out.println(b + " is greater than " + a);
        } else {
            System.out.println(a + " is equal to" + b);
        }

//        EXERCISE 2

        System.out.println("Enter number: ");
        int num = sc.nextInt();


        if (num % 2 == 0) {
            System.out.println(num + " is even ");
        } else {
            System.out.println(num + " is odd");
        }

//        EXERCISE 3

        System.out.println("Enter the number (from 1 to 7): ");
        int num1 = sc.nextInt();
        if (num1 < 1 || num1 > 7) {
            System.out.println("Invalid input");
        } else {
            System.out.println("Error!");
        }
        switch (num1){
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
        }

//        EXERCISE 4

        System.out.println("Enter a day of the week: ");
        String day = sc.nextLine();
        switch (day) {
            case "Monday":
            case "Tuesday":
            case "Wednesday":
            case "Thursday":
            case "Friday":
                System.out.println("Working day");
                break;
            case "Saturday":
            case "Sunday":
                System.out.println("Weekend");
                break;
            default:
                System.out.println("Error!");
                break;
        }

//        EXERCISE 5

        System.out.println("Enter number: ");
        int number = sc.nextInt();
        if (number >= -100 && number <= 100 && number != 0) {
            System.out.println("Yes!");
        } else {
            System.out.println("No!");
        }

//        EXERCISE 6

        System.out.println("Enter number: ");
        int number1 = sc.nextInt();
        if (number1 >= 100 && number1 <= 200) {
            System.out.println("Valid!");
        } else {
            System.out.println("Invalid!");
        }

//        EXERCISE 7

        System.out.println("Enter number N: ");
        int n = sc.nextInt();
        if (n < 1 || n > 100) {
            System.out.println("Invalid input! Please enter a number between 1 and 100!");
        }
        for (int i = 1; i <= n; i++) {
            System.out.println(i);
        }

//        EXERCISE 8

        System.out.println("Enter number N: ");
        int number2 = sc.nextInt();
        if (number2 > 1) {
           for (int i = number2; i >= 1; i--) {
               System.out.println(i);
           }
        } else {
            for (int i = number2; i <= 1; i++) {
                System.out.println(i);
            }
        }

//        EXERCISE 9

        System.out.print("Enter number N: ");
        int number3 =  sc.nextInt();
        for (int i = 1; i <= number3; i++) {
            if (i % 7 == 0 && i % 3 == 0){
                continue;
            }
            System.out.println(i);
        }

//        EXERCISE 10

        System.out.print("Enter number N: ");
        int number4 =  sc.nextInt();
        for (int i = 1; i <= number4; i++) {
            if (i % 7 == 0 && i % 5 == 0){
                System.out.println(i);
            }
        }

//        EXERCISE 11

        System.out.print("Enter number N: ");
        int number5 = sc.nextInt();
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        System.out.printf("Please enter " + number5 + "numbers: ");
        for (int i = 0; i < number5; i++) {
            int current = sc.nextInt();
            if (current > max) {
                max = current;
            }
            if (current < min) {
                min = current;
            }
        }
        System.out.println("Max number is : " + max);
        System.out.println("Min number is : " + min);

//        EXERCISE 12

        System.out.print("Enter number N: ");
        int number6 = sc.nextInt();
        System.out.print("Enter " + number6 + " numbers: ");
        int sum = 0;
        for (int i = 1; i <= number6; i++) {
            int current = sc.nextInt();
            sum += current;
        }
        System.out.println("The sum is " + sum);

//         EXERCISE 13


        while (true){
            System.out.print("Enter a string (or a `stop` to exit): ");
            String str = sc.nextLine();
            if (str.equals("stop")){
                break;
            } else {
                System.out.println(str);
            }
        }

//        EXERCISE 14

        while (true) {
            System.out.print("Enter number: ");
            int numbber7 =  sc.nextInt();
            if (numbber7 % 10 != 0 ){
                System.out.println("Error! Type another number!");
            } else if ( numbber7 % 10 == 0 ) {
                System.out.println("Exiting...");
                break;
            }
        }

//        EXERCISE 15

        int hour = 0;
        int minute = 0;
        while (true) {
            System.out.print("Type an hour (from 0 to 23): ");
            hour = sc.nextInt();
            if (hour < 0 || hour > 23) {
                System.out.println("Invalid hour. Try again!");
            } else {
                break;
            }
        }
        while (true) {
            System.out.print("Type minute/s (from 0 to 59): ");
            minute = sc.nextInt();
            if (minute < 0 || minute > 59) {
                System.out.println("Invalid hour. Try again!");
            } else {
                break;
            }
        }

        minute += 15;
        if (minute > 59) {
            hour += 1;
            minute = minute - 60;
            if (hour > 23) {
                hour = 0;
            }
        }

        if (minute <= 9) {
            System.out.print(hour + ":0" + minute);
        } else {
            System.out.print(hour + ":" + minute);
        }

//        EXERCISE 16

        System.out.println("Enter a number: ");
        int number8 = sc.nextInt();
        if (number8 >= 1 && number8 % 5 == 0){
            System.out.println("Valid!");
        } else {
            System.out.println("Invalid!");
        }

//        EXERCISE 17

        System.out.println("Enter number N: ");
        int N = sc.nextInt();
        System.out.println("Enter number K: ");
        int K = sc.nextInt();
        int multiplication_N = 1;
        int multiplication_K = 1;

        if (N > 1 && K > 1 && K < N) {
            for (int i = 2; i <= N; i++){
                multiplication_N *= i;
                if (i <= K){
                    multiplication_K *= i;
                }
            }
        } else {
            System.out.println("Invalid input");
        }
        System.out.println(multiplication_N);
        System.out.println(multiplication_K);
        System.out.println(multiplication_N / multiplication_K);

//        EXERCISE 18

        System.out.println("Enter number N: ");
        int N_ = sc.nextInt();
        System.out.println("Enter number K: ");
        int k = sc.nextInt();
        int multiplication_n = 1;
        int multiplication_k = 1;
        int multiplication_N_K = 1;

        if (N_ > 1 && k > 1 && k < N_) {
            for (int i = 2; i <= N_; i++){
                multiplication_n *= i;
                if (i <= k){
                    multiplication_k *= i;
                }
                if (i <= N_ -k){
                    multiplication_N_K *= i;
                }
            }
        } else {
            System.out.println("Invalid input");
        }

        System.out.println(multiplication_n);
        System.out.println(multiplication_k);
        System.out.println((multiplication_n * multiplication_k) / multiplication_N_K );

//        EXERCISE 19

        DecimalFormat df = new DecimalFormat("#.##");
        System.out.println("Input the money budget [1 to 1 000 000]: ");
        float budget = sc.nextFloat();
        System.out.println("Input the number of background actors [1 to 500]: ");
        int numberOfBackgroundActors = sc.nextInt();
        System.out.println("Input the price for a single background actor [1 to 1000]: ");
        float pricePerBackgroundActor = sc.nextFloat();

        float movie_set_price = (float) (budget - (0.1 * budget));
        float clothes_price = numberOfBackgroundActors * pricePerBackgroundActor;
        if (numberOfBackgroundActors > 150) {
            clothes_price = (float) (clothes_price - (0.1 * clothes_price));
        }
        if (movie_set_price + clothes_price > budget ) {
            System.out.println("Not enough money");
            System.out.println("Wingard needs " + df.format((movie_set_price + clothes_price) - budget) + " leva more");
            System.exit(0);

        } else {
            System.out.println("Action!");
            System.out.println("Wingard starts filming with " + df.format(budget - (movie_set_price + clothes_price)) + " leva left");
        }

//        EXERCISE 20

        DecimalFormat fo = new DecimalFormat("0.000");
        System.out.println("Type one of the following shapes to find its area (square, circle, triangle, rectangle) in centimeters: ");
        String shape_type =  sc.nextLine();
        float r, height, side, another_side, area = 0.0f;
        switch (shape_type) {
            case "square":
                System.out.println("Enter the side lenght of the square: ");
                side = sc.nextFloat();
                area = side * side;
                System.out.println("The area of the square is: " + fo.format(area) + " cm.");
                break;
            case "rectangle":
                System.out.println("Enter the height of the rectangle: ");
                side = sc.nextFloat();
                System.out.println("Enter the width of the rectangle: ");
                another_side = sc.nextFloat();
                area = another_side * another_side;
                System.out.println("The area of the square is: " + fo.format(area) + " cm.");
                break;
            case "circle":
                System.out.println("Enter the radius of the circle: ");
                r = sc.nextFloat();
                area = 3.14f * r * r;
                System.out.println("The area of the square is: " + fo.format(area) + " cm.");
                break;
            case "triangle":
                System.out.println("Enter one base of the triangle: ");
                height = sc.nextFloat();
                System.out.println("Enter the side of the triangle that is perpendicular to the base of the triangle: ");
                side = sc.nextFloat();
                area = (height * side) / 2;
                System.out.println("The area of the square is: " + fo.format(area) + " cm.");
                break;
                default:
                    System.out.println("Invalid input");

        }

    }
}
