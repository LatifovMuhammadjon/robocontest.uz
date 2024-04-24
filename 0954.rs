use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let mut j = 0u8;
    for i in input.trim().chars() {
        j = j*3%7;
        j = (j + i as u8 - 48)%7;
    }
    println!("{}", if j==0 {"YES"} else {"NO"});
}