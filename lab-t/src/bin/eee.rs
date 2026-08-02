use std::io;

fn get_terminal_input(prompt: &str) -> f64 {
    // This function takes a prompt as an argument, displays it to the user, and returns the user's input as a String.

    // Get user input. Do not edit this part
    println!("{prompt}: ");
    let mut var = String::new();
    match io::stdin().read_line(&mut var) {
        Ok(_n) => {}
        Err(error) => println!("error: {error}"),
    }
    let var_out: f64 = var.trim().parse().unwrap(); // convert string input to float. Note should remove unwrap before production
    var_out
}


fn main() {
    // Get input from the user
    let start = get_terminal_input("Enter start resistance");
    let stop = get_terminal_input("Enter stop resistance");

    // Your code below here
}
