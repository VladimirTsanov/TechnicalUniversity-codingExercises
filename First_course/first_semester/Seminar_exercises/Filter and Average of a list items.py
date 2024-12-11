class LIST:
    def __init__(self, list1):
        if isinstance(list1, list):
            self.list1 = list1
        else:
            raise ValueError("You should pass a list as an argument")

    def show_list(self):
        list_to_show = []
        for x in self.list1:
            if isinstance(x, float) or isinstance(x, int):
                list_to_show.append(x)
        print("Filtered list with numeric values:", list_to_show)
        return list_to_show

    def average_list(self):
        numeric_values = self.show_list()
        if numeric_values:
            average = sum(numeric_values) / len(numeric_values)
            print("Average of numeric values:", average)
            return average
        else:
            print("No numeric values to calculate the average.")
            return None


example_list = LIST([1, "hello", 3.5, True, 10])
example_list.show_list()
example_list.average_list()

