fn preenche_arr(arr: &mut [i32], val: i32) {
    for (i, _) in arr.iter_mut().enumerate() {
        *arr.get_mut(i).unwrap() = i as i32 * val;
    }
}

fn main() {
    let mut arr = [0; 10];
    preenche_arr(&mut arr, 3);

    for i in &arr {
        println!("{}", i);
    }
}