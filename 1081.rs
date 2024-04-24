use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("");
    let mut _counter = 0u8;
    let mut _a: [u16; 2] = [0, 0];
    let mut operator = "";
    for i in input.split_whitespace() {
        if _counter < 2 {
            _a[_counter as usize] = i.parse().expect("");
        } else {
            operator = i;
        }
        _counter += 1;
    }
    match operator {
        "*" => println!("1 {}", _a[0]*_a[1]),
        "+" => println!("1 {}", _a[0]+_a[1]-1),
        "/" => println!("{} {}", _a[0]*2,_a[1]*2),
        "-" => println!("{} {}", _a[0]+1,_a[1]+1),
        _ => ()
    }
}