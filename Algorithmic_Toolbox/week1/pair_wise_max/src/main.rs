fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).expect("Value not found");

    let n: usize = match n.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

    let v = multiple_input::<i64>().unwrap();

    if v.len() > n {
        return;
    }

    let res = maxpairwiseproduct(v);

    println!("{}", res);

}

fn maxpairwiseproduct(mut v: Vec<i64> ) -> i64 {

    let index = v.len();
    v.sort();

   v[index - 1] * v[index - 2]
   
}



fn multiple_input<T: std::str::FromStr>() -> Result<Vec<T>, T::Err> {
    let mut s = String::new();
    std::io::stdin()
            .read_line(&mut s)
            .expect("Value not found");
    s.trim()
        .split_whitespace()
        .map(|word| word.parse())
        .collect()
}