class Solution:
    def canFormArray(self, arr, pieces):
        d = {x[0]: x for x in pieces}
        return list(chain(*[d.get(num, []) for num in arr])) == arr
