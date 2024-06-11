<?php
// Database connection parameters
$servername = "localhost:3307";
$username = "root";
$password = "";
$database = "mydatabase";

// Create connection
$conn = new mysqli($servername, $username, $password, $database);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Check if the form has been submitted
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['submit'])) {
    $name = $_POST['name'];
    $email = $_POST['email'];

    // Check if the data already exists in the database
    $check_sql = "SELECT * FROM users WHERE name='$name' AND email='$email'";
    $check_result = $conn->query($check_sql);

    if ($check_result->num_rows > 0) {
        echo "Record already exists!";
    } else {
        // Insert data into the database
        $insert_sql = "INSERT INTO users (name, email) VALUES ('$name', '$email')";

        if ($conn->query($insert_sql) === TRUE) {
            echo "New record created successfully";
        } else {
            echo "Error: " . $insert_sql . "<br>" . $conn->error;
        }
    }
}

// Display data from the database
$sql = "SELECT * FROM users";
$result = $conn->query($sql);
?>

<!DOCTYPE html>
<html>
<head>
    <title>PHP MySQL Insert and Display Data</title>

    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f0f0f0;
            margin: 0;
            padding: 0;
        }
        .container {
            width: 80%;
            margin: 20px auto;
            background-color: #fff;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
        }
        h2 {
            color: #333;
            margin-bottom: 20px;
            text-align: center;
        }
        form {
            margin-bottom: 20px;
        }
        label {
            font-weight: bold;
            margin-bottom: 5px;
            display: block;
        }
        input[type="text"],
        input[type="email"],
        input[type="submit"] {
            width: 100%;
            padding: 10px;
            margin-bottom: 10px;
            border: 1px solid #ccc;
            border-radius: 4px;
            box-sizing: border-box;
            transition: border-color 0.3s ease;
        }
        input[type="text"]:focus,
        input[type="email"]:focus {
            border-color: #4CAF50;
            outline: none;
        }
        input[type="submit"] {
            background-color: #4CAF50;
            color: white;
            cursor: pointer;
            transition: background-color 0.3s ease;
        }
        input[type="submit"]:hover {
            background-color: #45a049;
        }
        table {
            width: 100%;
            border-collapse: collapse;
        }
        th, td {
            padding: 12px;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }
        th {
            background-color: #4CAF50;
            color: white;
            font-weight: bold;
        }
        tr:hover {
            background-color: #f2f2f2;
        }
    </style>
    
</head>
<body>
    <h2>Insert Data</h2>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
        <label for="name">Name:</label><br>
        <input type="text" id="name" name="name" required><br>
        <label for="email">Email:</label><br>
        <input type="email" id="email" name="email" required><br>
        <input type="submit" name="submit" value="Submit">
    </form>

    <?php
    // Display data from the database
    if ($result->num_rows > 0) {
        echo "<h2>Users Data</h2>";
        echo "<table><tr><th>ID</th><th>Name</th><th>Email</th></tr>";
        while($row = $result->fetch_assoc()) {
            echo "<tr><td>".$row["id"]."</td><td>".$row["name"]."</td><td>".$row["email"]."</td></tr>";
        }
        echo "</table>";
    } else {
        echo "0 results";
    }

    $conn->close();
    ?>
</body>
</html>
