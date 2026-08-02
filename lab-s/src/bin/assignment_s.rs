use std::io;

fn main() {
    // Get user input. Do not edit this part
    println!("Enter cylinder height in meters: ");
    let mut height = String::new();
    match io::stdin().read_line(&mut height) {
        Ok(_n) => {}
        Err(error) => println!("error: {error}"),
    }

    // Add your solution code under here
}
