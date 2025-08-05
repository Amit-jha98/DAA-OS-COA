# Big Data MCQs - Week 1-7

## Week 1-2: Foundations & Hadoop Ecosystem

### 1. Which of the following is NOT one of the original "3 V's" of Big Data?
a) Volume
b) Velocity
c) Variety
d) Value

**Answer: d) Value**

### 2. What is the primary role of NameNode in HDFS architecture?
a) Store actual data blocks
b) Maintain metadata and file system namespace
c) Execute MapReduce jobs
d) Handle client authentication

**Answer: b) Maintain metadata and file system namespace**

### 3. What is the default block size in HDFS?
a) 64 MB
b) 128 MB
c) 256 MB
d) 512 MB

**Answer: b) 128 MB**

### 4. What is the default replication factor in HDFS?
a) 2
b) 3
c) 4
d) 5

**Answer: b) 3**

### 5. Which component in Hadoop YARN is responsible for resource management?
a) NodeManager
b) ApplicationMaster
c) ResourceManager
d) Container

**Answer: c) ResourceManager**

### 6. In Hadoop YARN, what is the role of ApplicationMaster?
a) Manage cluster resources globally
b) Monitor node health
c) Negotiate resources and coordinate application execution
d) Store application data

**Answer: c) Negotiate resources and coordinate application execution**

### 7. Which "V" of Big Data refers to the trustworthiness and accuracy of data?
a) Volume
b) Velocity
c) Variety
d) Veracity

**Answer: d) Veracity**

### 8. What happens when a DataNode fails in HDFS?
a) Data is permanently lost
b) NameNode automatically replicates blocks to maintain replication factor
c) The entire cluster shuts down
d) Only the failed node's data becomes unavailable

**Answer: b) NameNode automatically replicates blocks to maintain replication factor**

## Week 3: Spark & NoSQL

### 9. What does RDD stand for in Apache Spark?
a) Resilient Distributed Database
b) Resilient Distributed Dataset
c) Reliable Data Distribution
d) Real-time Data Display

**Answer: b) Resilient Distributed Dataset**

### 10. Which of the following is a transformation in Spark RDD?
a) collect()
b) count()
c) map()
d) save()

**Answer: c) map()**

### 11. Which of the following is an action in Spark RDD?
a) filter()
b) flatMap()
c) reduce()
d) union()

**Answer: c) reduce()**

### 12. What is lineage in Spark RDDs?
a) The physical storage location of data
b) The sequence of operations that created an RDD
c) The number of partitions in an RDD
d) The replication factor of an RDD

**Answer: b) The sequence of operations that created an RDD**

### 13. According to CAP theorem, what three properties cannot all be guaranteed simultaneously?
a) Consistency, Availability, Performance
b) Consistency, Availability, Partition-tolerance
c) Concurrency, Availability, Persistence
d) Consistency, Atomicity, Partition-tolerance

**Answer: b) Consistency, Availability, Partition-tolerance**

### 14. Which database prioritizes Availability and Partition-tolerance over Consistency?
a) RDBMS
b) Cassandra
c) ACID-compliant databases
d) MongoDB

**Answer: b) Cassandra**

### 15. In CAP theorem, what does "Partition-tolerance" mean?
a) The system continues to operate despite network failures
b) Data can be partitioned across multiple nodes
c) The system can handle partial failures
d) Both a and c

**Answer: d) Both a and c**

## Week 4: Cassandra, Zookeeper, HBase

### 16. What is the query language used in Cassandra?
a) SQL
b) CQL
c) NoSQL
d) HQL

**Answer: b) CQL**

### 17. In Cassandra, what determines which node stores a particular piece of data?
a) Primary key hash
b) Secondary index
c) Time stamp
d) Node capacity

**Answer: a) Primary key hash**

### 18. Which of the following CQL syntax creates a table correctly?
a) CREATE TABLE users (id int, name text, PRIMARY KEY (id));
b) CREATE TABLE users {id int, name text, PRIMARY KEY (id)};
c) MAKE TABLE users (id int, name text, PRIMARY KEY (id));
d) NEW TABLE users (id int, name text, PRIMARY KEY (id));

**Answer: a) CREATE TABLE users (id int, name text, PRIMARY KEY (id));**

### 19. What is the storage hierarchy in HBase from top to bottom?
a) Table → Column Family → Row → Column
b) Table → Row → Column Family → Column
c) Row → Table → Column Family → Column
d) Column Family → Table → Row → Column

**Answer: b) Table → Row → Column Family → Column**

### 20. What is the purpose of Bloom filters in HBase?
a) Data compression
b) Reduce disk I/O by avoiding unnecessary block reads
c) Data encryption
d) Load balancing

**Answer: b) Reduce disk I/O by avoiding unnecessary block reads**

### 21. In HBase, what triggers automatic sharding (region splitting)?
a) Time-based intervals
b) Manual configuration
c) Region size exceeding threshold
d) Memory usage

**Answer: c) Region size exceeding threshold**

### 22. What is the role of Zookeeper in HBase?
a) Data storage
b) Coordination service and configuration management
c) Query processing
d) Data compression

**Answer: b) Coordination service and configuration management**

## Week 5: Streaming & Kafka

### 23. In Spark Streaming, what is a sliding window?
a) A fixed-size window that moves at regular intervals
b) A window that grows infinitely
c) A window that only captures recent data
d) A static window that never changes

**Answer: a) A fixed-size window that moves at regular intervals**

### 24. If you have a sliding window of 30 seconds with a slide interval of 10 seconds, how often do you get results?
a) Every 30 seconds
b) Every 10 seconds
c) Every 20 seconds
d) Every 40 seconds

**Answer: b) Every 10 seconds**

### 25. Which of the following is a typical use case for Spark Streaming sliding windows?
a) Batch processing historical data
b) Real-time sentiment analysis of social media streams
c) Static data analysis
d) Database backups

**Answer: b) Real-time sentiment analysis of social media streams**

### 26. In a Twitter sentiment analysis case study using Spark Streaming, what would be the typical data flow?
a) Twitter API → Kafka → Spark Streaming → Results
b) Twitter API → HDFS → Spark Streaming → Results
c) Twitter API → Spark Streaming → Kafka → Results
d) Spark Streaming → Twitter API → Results

**Answer: a) Twitter API → Kafka → Spark Streaming → Results**

### 27. What is Apache Kafka primarily used for?
a) Data storage
b) Stream processing
c) Message queuing and event streaming
d) Machine learning

**Answer: c) Message queuing and event streaming**

## Week 6-7: ML & Graph Processing

### 28. In MapReduce implementation of K-means, what happens in the Map phase?
a) Calculate new centroids
b) Assign points to nearest centroid
c) Initialize centroids
d) Output final clusters

**Answer: b) Assign points to nearest centroid**

### 29. In MapReduce implementation of K-means, what happens in the Reduce phase?
a) Assign points to clusters
b) Calculate new centroids from assigned points
c) Initialize random centroids
d) Validate cluster quality

**Answer: b) Calculate new centroids from assigned points**

### 30. What is an advantage of implementing K-means in Spark MLlib over MapReduce?
a) Better accuracy
b) In-memory computing reduces I/O overhead
c) More clustering algorithms
d) Automatic parameter tuning

**Answer: b) In-memory computing reduces I/O overhead**

### 31. What does the PageRank algorithm measure?
a) The loading speed of web pages
b) The importance/authority of nodes in a graph
c) The physical distance between nodes
d) The data size of web pages

**Answer: b) The importance/authority of nodes in a graph**

### 32. In GraphX, how does PageRank handle the "random surfer" model?
a) Users always follow links
b) Users randomly jump to any page with some probability
c) Users only visit popular pages
d) Users follow a predetermined path

**Answer: b) Users randomly jump to any page with some probability**

### 33. What is the main advantage of Spark GraphX over traditional graph processing systems?
a) Faster algorithms
b) Unifies graph and data-parallel operations in one system
c) Better visualization
d) Lower memory usage

**Answer: b) Unifies graph and data-parallel operations in one system**

### 34. In PageRank algorithm, what is the damping factor typically set to?
a) 0.5
b) 0.75
c) 0.85
d) 0.95

**Answer: c) 0.85**

### 35. Which operation in Spark GraphX is used to apply computations to vertices?
a) mapEdges()
b) mapVertices()
c) aggregateMessages()
d) joinVertices()

**Answer: b) mapVertices()**

## Bonus Questions

### 36. What is the main difference between Spark RDD transformations and actions?
a) Transformations are faster than actions
b) Transformations are lazy, actions trigger execution
c) Actions are lazy, transformations trigger execution
d) There is no difference

**Answer: b) Transformations are lazy, actions trigger execution**

### 37. In HDFS, what is the purpose of Secondary NameNode?
a) Backup for primary NameNode
b) Load balancing for NameNode
c) Checkpoint creation and metadata management
d) Additional storage for metadata

**Answer: c) Checkpoint creation and metadata management**

### 38. Which consistency model does Cassandra follow?
a) Strong consistency
b) Eventual consistency
c) Immediate consistency
d) Sequential consistency

**Answer: b) Eventual consistency**

### 39. What is the default partitioner in Spark?
a) RangePartitioner
b) HashPartitioner
c) RandomPartitioner
d) CustomPartitioner

**Answer: b) HashPartitioner**

### 40. In HBase, what is a RegionServer responsible for?
a) Metadata management
b) Serving read/write requests for regions
c) Load balancing
d) Schema management

**Answer: b) Serving read/write requests for regions**

### More MCQ...

# Big Data MCQs - Week 1-7 (Extended)

## Week 1-2: Foundations & Hadoop Ecosystem (Additional Questions)

### 41. What is the minimum number of DataNodes required for HDFS to function properly?
a) 1
b) 2
c) 3
d) 4

**Answer: a) 1**

### 42. Which "V" of Big Data represents the business importance or economic value?
a) Volume
b) Velocity
c) Variety
d) Value

**Answer: d) Value**

### 43. In HDFS, what happens when the NameNode fails?
a) System continues normally
b) Data becomes inaccessible but not lost
c) All data is permanently lost
d) DataNodes automatically elect a new NameNode

**Answer: b) Data becomes inaccessible but not lost**

### 44. What is the purpose of rack awareness in HDFS?
a) Load balancing
b) Fault tolerance and network optimization
c) Data compression
d) Security enhancement

**Answer: b) Fault tolerance and network optimization**

### 45. Which YARN component runs on each node and manages containers?
a) ResourceManager
b) ApplicationMaster
c) NodeManager
d) Container

**Answer: c) NodeManager**

### 46. What is the typical storage pattern for HDFS replicas across racks?
a) All replicas on same rack
b) Two on same rack, one on different rack
c) One replica per rack
d) Random distribution

**Answer: b) Two on same rack, one on different rack**

### 47. Which Big Data characteristic deals with different data formats (structured, semi-structured, unstructured)?
a) Volume
b) Velocity
c) Variety
d) Veracity

**Answer: c) Variety**

### 48. What is the maximum block size limit in HDFS?
a) 128 MB
b) 256 MB
c) 1 GB
d) No theoretical limit

**Answer: d) No theoretical limit**

## Week 3: Spark & NoSQL (Additional Questions)

### 49. Which of the following operations causes data shuffling in Spark?
a) map()
b) filter()
c) groupByKey()
d) cache()

**Answer: c) groupByKey()**

### 50. What is the main benefit of RDD lineage in Spark?
a) Performance optimization
b) Fault recovery without replication
c) Memory management
d) Data compression

**Answer: b) Fault recovery without replication**

### 51. Which Spark operation is more efficient for aggregations?
a) groupByKey()
b) reduceByKey()
c) collectAsMap()
d) sortByKey()

**Answer: b) reduceByKey()**

### 52. In CAP theorem, which combination does MongoDB typically choose?
a) Consistency + Availability
b) Consistency + Partition-tolerance
c) Availability + Partition-tolerance
d) All three equally

**Answer: b) Consistency + Partition-tolerance**

### 53. What type of RDD operation is `saveAsTextFile()`?
a) Transformation
b) Action
c) Lazy operation
d) Cache operation

**Answer: b) Action**

### 54. Which of the following is true about Spark RDD partitions?
a) They are mutable
b) They can span multiple nodes
c) They are processed in parallel
d) They store metadata only

**Answer: c) They are processed in parallel**

### 55. What does eventual consistency mean in NoSQL databases?
a) Data is immediately consistent
b) Data will become consistent over time
c) Data is never consistent
d) Consistency is manually managed

**Answer: b) Data will become consistent over time**

### 56. Which Spark operation triggers immediate execution?
a) map()
b) filter()
c) first()
d) union()

**Answer: c) first()**

## Week 4: Cassandra, Zookeeper, HBase (Additional Questions)

### 57. What is a keyspace in Cassandra?
a) A single row identifier
b) A namespace for tables (similar to database)
c) A partitioning strategy
d) A replication factor

**Answer: b) A namespace for tables (similar to database)**

### 58. In Cassandra, what is a partition key used for?
a) Sorting data within a partition
b) Determining which node stores the data
c) Indexing secondary columns
d) Compressing data

**Answer: b) Determining which node stores the data**

### 59. What is the role of a coordinator node in Cassandra?
a) Store all data
b) Route client requests to appropriate nodes
c) Manage cluster membership
d) Handle backup operations

**Answer: b) Route client requests to appropriate nodes**

### 60. In HBase, what is a column qualifier?
a) The name of a column family
b) The specific column name within a column family
c) A row identifier
d) A timestamp value

**Answer: b) The specific column name within a column family**

### 61. What is compaction in Cassandra?
a) Data compression algorithm
b) Merging SSTables to reclaim space
c) Node failure recovery
d) Query optimization

**Answer: b) Merging SSTables to reclaim space**

### 62. Which of the following is true about HBase regions?
a) They contain all columns for a table
b) They store contiguous ranges of rows
c) They are fixed in size
d) They cannot be split

**Answer: b) They store contiguous ranges of rows**

### 63. What is the Write-Ahead Log (WAL) in HBase used for?
a) Query optimization
b) Data compression
c) Durability and recovery
d) Load balancing

**Answer: c) Durability and recovery**

### 64. In Cassandra, what does consistency level ONE mean?
a) Only one replica must respond
b) All replicas must respond
c) Majority of replicas must respond
d) No consistency guarantee

**Answer: a) Only one replica must respond**

## Week 5: Streaming & Kafka (Additional Questions)

### 65. What is a Kafka topic?
a) A single message
b) A category or feed of messages
c) A consumer group
d) A partition key

**Answer: b) A category or feed of messages**

### 66. In Kafka, what ensures message ordering within a partition?
a) Timestamps
b) Message keys
c) Sequential offset assignment
d) Consumer configuration

**Answer: c) Sequential offset assignment**

### 67. What is the purpose of Kafka partitions?
a) Data compression
b) Parallel processing and scalability
c) Message encryption
d) Schema validation

**Answer: b) Parallel processing and scalability**

### 68. In Spark Streaming, what is a microbatch?
a) A small dataset
b) A mini RDD created from stream data
c) A configuration parameter
d) A type of transformation

**Answer: b) A mini RDD created from stream data**

### 69. What happens if a Kafka consumer falls behind?
a) Messages are lost
b) Consumer is automatically restarted
c) Messages accumulate until consumer catches up
d) Partition is reassigned

**Answer: c) Messages accumulate until consumer catches up**

### 70. Which Kafka component maintains cluster membership?
a) Broker
b) Producer
c) Consumer
d) Zookeeper

**Answer: d) Zookeeper**

### 71. In Spark Streaming, what determines the batch interval?
a) Input data rate
b) Application configuration
c) Available memory
d) Network latency

**Answer: b) Application configuration**

### 72. What is the default message retention policy in Kafka?
a) 1 hour
b) 24 hours
c) 7 days
d) Indefinite

**Answer: c) 7 days**

## Week 6-7: ML & Graph Processing (Additional Questions)

### 73. In the K-means algorithm, how is convergence typically determined?
a) Fixed number of iterations
b) Centroids stop moving significantly
c) All points are assigned
d) Error reaches zero

**Answer: b) Centroids stop moving significantly**

### 74. What is the time complexity of one iteration of K-means with n points, k clusters, and d dimensions?
a) O(n)
b) O(nkd)
c) O(n²)
d) O(k²d)

**Answer: b) O(nkd)**

### 75. In PageRank, what does a higher score indicate?
a) Faster page loading
b) More important or authoritative page
c) Larger page size
d) Recent updates

**Answer: b) More important or authoritative page**

### 76. What is the purpose of the random jump in PageRank?
a) Add randomness to results
b) Handle pages with no outgoing links
c) Improve convergence
d) All of the above

**Answer: d) All of the above**

### 77. In Spark MLlib, which algorithm is used for collaborative filtering?
a) K-means
b) ALS (Alternating Least Squares)
c) PageRank
d) Linear Regression

**Answer: b) ALS (Alternating Least Squares)**

### 78. What is the main advantage of using GraphX for graph processing?
a) Better visualization
b) Integration with Spark ecosystem
c) Faster algorithms
d) More graph algorithms

**Answer: b) Integration with Spark ecosystem**

### 79. In graph processing, what is vertex-centric programming?
a) Processing all vertices simultaneously
b) Each vertex processes local information
c) Centralized vertex management
d) Vertex-specific algorithms

**Answer: b) Each vertex processes local information**

### 80. Which metric is commonly used to evaluate clustering quality in K-means?
a) Accuracy
b) Within-cluster sum of squares (WCSS)
c) Precision
d) F1-score

**Answer: b) Within-cluster sum of squares (WCSS)**

## Advanced/Mixed Topics

### 81. What is data locality in distributed computing?
a) Storing data in specific geographic locations
b) Processing data where it's stored to minimize network traffic
c) Using local databases only
d) Encrypting data locally

**Answer: b) Processing data where it's stored to minimize network traffic**

### 82. Which of the following best describes lambda architecture?
a) Serverless computing model
b) Batch + real-time processing layers
c) Graph processing paradigm
d) NoSQL design pattern

**Answer: b) Batch + real-time processing layers**

### 83. What is the primary purpose of data serialization in distributed systems?
a) Data compression
b) Converting objects to transmittable format
c) Data encryption
d) Schema validation

**Answer: b) Converting objects to transmittable format**

### 84. In distributed systems, what is idempotency?
a) Operations produce same result when repeated
b) Operations are atomic
c) Operations are reversible
d) Operations are distributed

**Answer: a) Operations produce same result when repeated**

### 85. What is the main difference between horizontal and vertical scaling?
a) Cost difference
b) Adding more machines vs. upgrading existing machines
c) Speed difference
d) Reliability difference

**Answer: b) Adding more machines vs. upgrading existing machines**

### 86. Which consistency model provides the strongest guarantees?
a) Eventual consistency
b) Strong consistency
c) Weak consistency
d) Causal consistency

**Answer: b) Strong consistency**

### 87. What is the purpose of checkpointing in stream processing?
a) Data backup
b) Fault tolerance and state recovery
c) Performance monitoring
d) Data validation

**Answer: b) Fault tolerance and state recovery**

### 88. In distributed computing, what is a hot spot?
a) Temperature monitoring
b) Uneven load distribution causing bottlenecks
c) High-priority tasks
d) Emergency situations

**Answer: b) Uneven load distribution causing bottlenecks**

### 89. What is the main benefit of columnar storage formats like Parquet?
a) Faster writes
b) Better compression and analytical query performance
c) Easier schema evolution
d) Better security

**Answer: b) Better compression and analytical query performance**

### 90. Which of the following is true about eventual consistency?
a) Guarantees immediate consistency
b) Allows temporary inconsistencies but ensures eventual convergence
c) Never achieves consistency
d) Requires manual intervention

**Answer: b) Allows temporary inconsistencies but ensures eventual convergence**