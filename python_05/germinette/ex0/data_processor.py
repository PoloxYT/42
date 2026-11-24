from typing import Any
from abc import ABC, abstractmethod


class DataProcessor(ABC):
    @abstractmethod
    def validate(self, data: Any) -> bool:
        pass

    @abstractmethod
    def ingest(self, data: Any) -> None:
        pass

    def output(self) -> tuple[int, str]:
        pass


class NumericProcessor(DataProcessor):
    def validate(self, data: Any) -> bool:
        try:
            if int(data) == data:
                return True
            else:
                return False
        except ValueError:
            return False

    def ingest(self, data: int | float) -> None:
        try:
            data += 2
        except TypeError:
            raise TypeError


class TextProcessor(DataProcessor):
    def validate(self, data: Any) -> bool:
        try:
            if f"{data}" == data:
                return True
            else:
                return False
        except ValueError:
            return False

    def ingest(self, data: str) -> None:
        try:
            pass
        except ValueError:
            raise ValueError


class LogProcessor(DataProcessor):
    def validate(self, data: Any) -> bool:
        if {data} == data:
            return True
        else:
            return False

    def ingest(self, data: dict) -> None:
        try:
            pass
        except ValueError:
            raise ValueError


print("=== Code Nexus - Data Processor ===")
print("")
print("Testing Numeric Processor...")
test1 = NumericProcessor()
test2 = NumericProcessor()
test3 = NumericProcessor()
print(" Trying to validate input '42':", test1.validate(42))
print(" Trying to validate input 'Hello':", test2.validate('Hello'))
print(" Test invalid ingestion of string 'foo' without prior validation:")
try:
    test3.ingest('foo')
except TypeError:
    print(" Got exception: Improper numeric data")
process = [1, 2, 3, 4, 5]
print(" Processing data:", process)
# Extracting 3 values...
# Numeric value 0: 1
# Numeric value 1: 2
# Numeric value 2: 3
print("")
print("Testing Text Processor...")
test1 = TextProcessor()
print(" Trying to validate input '42':", test1.validate(42))
process = ['Hello', 'Nexus', 'World']
print(" Processing data:", process)
# Extracting 1 value...
# Text value 0: Hello
print("")
print("Testing Log Processor...")
test1 = LogProcessor()
print(" Trying to validate input 'Hello':", test1.validate('Hello'))
process = [{}, {}]
process[0] = {'log_level': 'NOTICE', 'log_message': 'Connection to server'}
process[1] = {'log_level': 'ERROR', 'log_message': 'Unauthorized access!!'}
print(" Processing data:", process)
# Extracting 2 values...
# Log entry 0: NOTICE: Connection to server
# Log entry 1: ERROR: Unauthorized access!!