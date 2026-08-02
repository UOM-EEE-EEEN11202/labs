use std::fs;

fn read_file(filename: &str) -> Vec<f64> {
    // Vector to store the data
    let mut data: Vec<f64> = vec![];

    // Check the file can be opened
    let fname_result = fs::File::open(filename);
    let _fname = match fname_result {
        Ok(file) => file,
        Err(error) => panic!("Cannot open file: {error:?}"),
    };

    // Read the file one line at a time and convert to f64
    // Note there are better methods than reading line by line if working with large files
    for line in fs::read_to_string(filename)
        .expect("Error reading file")
        .lines()
    {
        let num: f64 = line.trim().parse().unwrap(); // remove unwrap before production
        data.push(num);
    }

    // Set output
    data
}

fn main() {
    let filename = String::from("data/numbers.txt");
    let contents = read_file(&filename);

    // Your code under here

}
