data class DataUser(val name : String, val address : String)

fun main() {
//     val officeOpen = 7
//     val now = 10
//     val isOpen = now > officeOpen

//     if (!isOpen) {
//         print("Office is closed")
//     } else {
//         print("Office is open")
//     }
val x = 11
when (x) {
    10, 11 -> print("a")
}

val dicoding = DataUser("Dicoding Indonesia", "Bandung") 
println(dicoding)


}

