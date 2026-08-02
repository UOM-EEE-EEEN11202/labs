// Each of the examples below is a complete Rust program
// Uncomment and run one example at a time

// Example i
fn use_vector(v_in: Vec<f64>) -> Vec<f64> {
    let mut v_out = v_in;
    v_out.push(4.0);
    v_out
}

fn main() {
    let v0 = vec![1.0, 2.0, 3.0];
    let v1 = use_vector(v0);
    println!("v1 = {v1:?}"); // {:?} is to print the vector in a suitable format
}

// // Example ii
// fn use_vector(v_in: Vec<f64>) -> Vec<f64> {
//     let mut v_out = v_in;
//     v_out.push(4.0);
//     v_out
// }

// fn main() {
//     let v0 = vec![1.0, 2.0, 3.0];
//     let v1 = use_vector(v0);
//     println!("v0 = {v0:?}"); // {:?} is to print the vector in a suitable format
// }

// // Example iii
// fn use_vector(v_in: &mut Vec<i32>) {
//     v_in.push(4);
// }

// fn main() {
//     let mut v0 = vec![1, 2, 3];
//     use_vector(&mut v0);
//     println!("v0 = {v0:?}"); // {:?} is to print the vector in a suitable format
// }

// // Example iv
// fn use_vector(v_in: &Vec<i32>) {
//     v_in.push(4);
// }

// fn main() {
//     let mut v0 = vec![1, 2, 3];
//     use_vector(&v0);
//     println!("v0 = {v0:?}"); // {:?} is to print the vector in a suitable format
// }

// // Example v
// fn use_vector(v_in: &Vec<&str>) -> String {
//     let v_out = v_in[0].to_string();
//     v_out
// }

// fn main() {
//     let v0 = vec!["a", "ab", "abc"];
//     let v1 = use_vector(&v0);
//     println!("v0 = {v0:?}, v1 = {v1:?}"); // {:?} is to print the vector in a suitable format
// }

// // Example vi
// fn use_vector(v_in: &mut Vec<&str>) -> String {
//     let v_out = v_in[0].to_string();
//     v_out
// }

// fn main() {
//     let mut v0 = vec!["a", "ab", "abc"];
//     let v1 = use_vector(&mut v0);
//     println!("v0 = {v0:?}, v1 = {v1:?}"); // {:?} is to print the vector in a suitable format
// }

// // Example vii
// fn use_vector(v_in: &mut Vec<&str>) {
//     v_in.push("xyz");
// }

// fn main() {
//     let mut v0 = vec!["a", "ab", "abc"];
//     use_vector(&mut v0);
//     println!("v0 = {v0:?}, v[3] = {}", v0[3]); // {:?} is to print the vector in a suitable format
// }

// // Example viii
// fn use_vector(v1: f64, v2: f64) -> f64 {
//     let v_out = v1 + v2;
//     v_out
// }

// fn main() {
//     let v0 = vec![10.0, 20.0, 30.0, 40.0, 50.0];
//     let v1 = use_vector(v0[0], v0[v0.len() - 1]);
//     println!("v1 = {v1:?}");
// }

// // Example ix
// fn use_vector(v_a: &f64, v_b: &f64, v_c: &mut f64) -> f64 {
//     let v_d = v_a + v_b;
//     *v_c = 0.0;
//     v_d
// }

// fn main() {
//     let mut v0 = Vec::new();
//     for i in 0..10 {
//         v0.push(11.2 * i as f64);
//     }
//     let v1 = use_vector(&v0[1], &v0[2], &mut v0[3]);
//     println!("v0 = {v0:?}, v1 = {v1}"); // {:?} is to print the vector in a suitable format
// }

// // Example x
// fn use_vector(v_in: &Vec<&str>) -> String {
//     let v_out = v_in[3].to_string();
//     v_out
// }

// fn main() {
//     let v0 = vec!["a", "ab", "abc"];
//     let v1 = use_vector(&v0);
//     println!("v0 = {v0:?}, v1 = {v1:?}"); // {:?} is to print the vector in a suitable format
// }
