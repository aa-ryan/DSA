use rand::Rng;

fn main() {
// stress test    
loop {
        let k = rand::thread_rng().gen_range(2, 100);
        println!("random number k = {}", k);

        let mut arr = Vec::new();
        
        for i in 0..k {
            arr.push(rand::thread_rng().gen_range(0, 100000))
        }

        println!("                     array --> {:?}                   ", arr);

        let res1 = maxpairwiseproduct(arr.clone());
        let res2 = maxpairwiseproduct(arr.clone());

        if res1 != res2 {
            println!("Wrong answer: res1 = {} res 2 = {}", res1, res2);
        }
        else {
            println!("");
            println!("");
            println!("");
            println!("OK");
        }
    }
///////////////////////////////////////////////////////////////////////////////////


    // let mut n = String::new();
    // std::io::stdin().read_line(&mut n).expect("Value not found");

    // let n: usize = match n.trim().parse() {
    //     Ok(num) => num,
    //     Err(_) => return,
    // };

    // let v = multiple_input::<i64>().unwrap();

    // if v.len() > n {
    //     return;
    // }

    // let res = maxpairwiseproduct(v);

    // println!("{}", res);

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