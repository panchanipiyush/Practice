function Validation() {
    var name = document.getElementById("name").value;
    var FullName = document.getElementById("fullname").value;
    var loginID = document.getElementById("Loginid").value;
    var password = document.getElementById("password").value;
    var Address = document.getElementById("Address").value;
    var State = document.getElementById("State").value;

    var namee = document.getElementById("namee")


    if (name == "" || name == null) {
        namee.innerHTML = "Fname shold not be blank"
        btn.disabled = true
    }
    else {
        fnamee.innerHTML = "";
        btn.disabled = false
    }

}