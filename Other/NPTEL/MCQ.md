# 📊 Big Data Technologies - Comprehensive MCQ Collection

> **Course Coverage:** Week 1-7 | **Total Questions:** 130+ | **Last Updated:** August 2025

---

## 📋 Table of Contents

- [🏗️ Week 1-2: Foundations & Hadoop Ecosystem](#️-week-1-2-foundations--hadoop-ecosystem)
- [⚡ Week 3: Spark & NoSQL](#-week-3-spark--nosql)
- [🗄️ Week 4: Cassandra, Zookeeper, HBase](#️-week-4-cassandra-zookeeper-hbase)
- [🌊 Week 5: Streaming & Kafka](#-week-5-streaming--kafka)
- [🤖 Week 6-7: ML & Graph Processing](#-week-6-7-ml--graph-processing)
- [🎯 Advanced Topics](#-advanced-topics)
- [📈 Performance & Optimization](#-performance--optimization)
- [🔄 Mixed Cross-Topic Questions](#-mixed-cross-topic-questions)


---

## 🏗️ Week 1-2: Foundations & Hadoop Ecosystem

### **Big Data Fundamentals**

#### 1. Which of the following is NOT one of the original "3 V's" of Big Data?
- [ ] a) Volume
- [ ] b) Velocity
- [ ] c) Variety
- ✅ d) Value

> **Explanation:** The original 3 V's were Volume, Velocity, and Variety. Value was added later as the 4th V.

#### 2. Which "V" of Big Data refers to the trustworthiness and accuracy of data?
- [ ] a) Volume
- [ ] b) Velocity
- [ ] c) Variety
- ✅ d) Veracity

#### 3. Which Big Data characteristic deals with different data formats (structured, semi-structured, unstructured)?
- [ ] a) Volume
- [ ] b) Velocity
- ✅ c) Variety
- [ ] d) Veracity

### **HDFS Architecture**

#### 4. What is the primary role of NameNode in HDFS architecture?
- [ ] a) Store actual data blocks
- ✅ b) Maintain metadata and file system namespace
- [ ] c) Execute MapReduce jobs
- [ ] d) Handle client authentication

#### 5. What is the default block size in HDFS?
- [ ] a) 64 MB
- ✅ b) 128 MB
- [ ] c) 256 MB
- [ ] d) 512 MB

#### 6. What is the default replication factor in HDFS?
- [ ] a) 2
- ✅ b) 3
- [ ] c) 4
- [ ] d) 5

#### 7. What happens when a DataNode fails in HDFS?
- [ ] a) Data is permanently lost
- ✅ b) NameNode automatically replicates blocks to maintain replication factor
- [ ] c) The entire cluster shuts down
- [ ] d) Only the failed node's data becomes unavailable

#### 8. What is the minimum number of DataNodes required for HDFS to function properly?
- ✅ a) 1
- [ ] b) 2
- [ ] c) 3
- [ ] d) 4

#### 9. In HDFS, what happens when the NameNode fails?
- [ ] a) System continues normally
- ✅ b) Data becomes inaccessible but not lost
- [ ] c) All data is permanently lost
- [ ] d) DataNodes automatically elect a new NameNode

#### 10. What is the purpose of rack awareness in HDFS?
- [ ] a) Load balancing
- ✅ b) Fault tolerance and network optimization
- [ ] c) Data compression
- [ ] d) Security enhancement

#### 11. What is the typical storage pattern for HDFS replicas across racks?
- [ ] a) All replicas on same rack
- ✅ b) Two on same rack, one on different rack
- [ ] c) One replica per rack
- [ ] d) Random distribution

#### 12. What is the maximum block size limit in HDFS?
- [ ] a) 128 MB
- [ ] b) 256 MB
- [ ] c) 1 GB
- ✅ d) No theoretical limit

#### 13. In HDFS, what is the purpose of Secondary NameNode?
- [ ] a) Backup for primary NameNode
- [ ] b) Load balancing for NameNode
- ✅ c) Checkpoint creation and metadata management
- [ ] d) Additional storage for metadata

### **Hadoop YARN**

#### 14. Which component in Hadoop YARN is responsible for resource management?
- [ ] a) NodeManager
- [ ] b) ApplicationMaster
- ✅ c) ResourceManager
- [ ] d) Container

#### 15. In Hadoop YARN, what is the role of ApplicationMaster?
- [ ] a) Manage cluster resources globally
- [ ] b) Monitor node health
- ✅ c) Negotiate resources and coordinate application execution
- [ ] d) Store application data

#### 16. Which YARN component runs on each node and manages containers?
- [ ] a) ResourceManager
- [ ] b) ApplicationMaster
- ✅ c) NodeManager
- [ ] d) Container

---

## ⚡ Week 3: Spark & NoSQL

### **Apache Spark & RDDs**

#### 17. What does RDD stand for in Apache Spark?
- [ ] a) Resilient Distributed Database
- ✅ b) Resilient Distributed Dataset
- [ ] c) Reliable Data Distribution
- [ ] d) Real-time Data Display

#### 18. Which of the following is a transformation in Spark RDD?
- [ ] a) collect()
- [ ] b) count()
- ✅ c) map()
- [ ] d) save()

#### 19. Which of the following is an action in Spark RDD?
- [ ] a) filter()
- [ ] b) flatMap()
- ✅ c) reduce()
- [ ] d) union()

#### 20. What is lineage in Spark RDDs?
- [ ] a) The physical storage location of data
- ✅ b) The sequence of operations that created an RDD
- [ ] c) The number of partitions in an RDD
- [ ] d) The replication factor of an RDD

#### 21. What is the main difference between Spark RDD transformations and actions?
- [ ] a) Transformations are faster than actions
- ✅ b) Transformations are lazy, actions trigger execution
- [ ] c) Actions are lazy, transformations trigger execution
- [ ] d) There is no difference

#### 22. Which of the following operations causes data shuffling in Spark?
- [ ] a) map()
- [ ] b) filter()
- ✅ c) groupByKey()
- [ ] d) cache()

#### 23. What is the main benefit of RDD lineage in Spark?
- [ ] a) Performance optimization
- ✅ b) Fault recovery without replication
- [ ] c) Memory management
- [ ] d) Data compression

#### 24. Which Spark operation is more efficient for aggregations?
- [ ] a) groupByKey()
- ✅ b) reduceByKey()
- [ ] c) collectAsMap()
- [ ] d) sortByKey()

#### 25. What type of RDD operation is `saveAsTextFile()`?
- [ ] a) Transformation
- ✅ b) Action
- [ ] c) Lazy operation
- [ ] d) Cache operation

#### 26. Which of the following is true about Spark RDD partitions?
- [ ] a) They are mutable
- [ ] b) They can span multiple nodes
- ✅ c) They are processed in parallel
- [ ] d) They store metadata only

#### 27. Which Spark operation triggers immediate execution?
- [ ] a) map()
- [ ] b) filter()
- ✅ c) first()
- [ ] d) union()

#### 28. What is the default partitioner in Spark?
- [ ] a) RangePartitioner
- ✅ b) HashPartitioner
- [ ] c) RandomPartitioner
- [ ] d) CustomPartitioner

### **CAP Theorem & NoSQL**

#### 29. According to CAP theorem, what three properties cannot all be guaranteed simultaneously?
- [ ] a) Consistency, Availability, Performance
- ✅ b) Consistency, Availability, Partition-tolerance
- [ ] c) Concurrency, Availability, Persistence
- [ ] d) Consistency, Atomicity, Partition-tolerance

#### 30. Which database prioritizes Availability and Partition-tolerance over Consistency?
- [ ] a) RDBMS
- ✅ b) Cassandra
- [ ] c) ACID-compliant databases
- [ ] d) MongoDB

#### 31. In CAP theorem, what does "Partition-tolerance" mean?
- [ ] a) The system continues to operate despite network failures
- [ ] b) Data can be partitioned across multiple nodes
- [ ] c) The system can handle partial failures
- ✅ d) Both a and c

#### 32. In CAP theorem, which combination does MongoDB typically choose?
- [ ] a) Consistency + Availability
- ✅ b) Consistency + Partition-tolerance
- [ ] c) Availability + Partition-tolerance
- [ ] d) All three equally

#### 33. What does eventual consistency mean in NoSQL databases?
- [ ] a) Data is immediately consistent
- ✅ b) Data will become consistent over time
- [ ] c) Data is never consistent
- [ ] d) Consistency is manually managed

---

## 🗄️ Week 4: Cassandra, Zookeeper, HBase

### **Apache Cassandra**

#### 34. What is the query language used in Cassandra?
- [ ] a) SQL
- ✅ b) CQL
- [ ] c) NoSQL
- [ ] d) HQL

#### 35. In Cassandra, what determines which node stores a particular piece of data?
- ✅ a) Primary key hash
- [ ] b) Secondary index
- [ ] c) Time stamp
- [ ] d) Node capacity

#### 36. Which of the following CQL syntax creates a table correctly?
- ✅ a) CREATE TABLE users (id int, name text, PRIMARY KEY (id));
- [ ] b) CREATE TABLE users {id int, name text, PRIMARY KEY (id)};
- [ ] c) MAKE TABLE users (id int, name text, PRIMARY KEY (id));
- [ ] d) NEW TABLE users (id int, name text, PRIMARY KEY (id));

#### 37. Which consistency model does Cassandra follow?
- [ ] a) Strong consistency
- ✅ b) Eventual consistency
- [ ] c) Immediate consistency
- [ ] d) Sequential consistency

#### 38. What is a keyspace in Cassandra?
- [ ] a) A single row identifier
- ✅ b) A namespace for tables (similar to database)
- [ ] c) A partitioning strategy
- [ ] d) A replication factor

#### 39. In Cassandra, what is a partition key used for?
- [ ] a) Sorting data within a partition
- ✅ b) Determining which node stores the data
- [ ] c) Indexing secondary columns
- [ ] d) Compressing data

#### 40. What is the role of a coordinator node in Cassandra?
- [ ] a) Store all data
- ✅ b) Route client requests to appropriate nodes
- [ ] c) Manage cluster membership
- [ ] d) Handle backup operations

#### 41. What is compaction in Cassandra?
- [ ] a) Data compression algorithm
- ✅ b) Merging SSTables to reclaim space
- [ ] c) Node failure recovery
- [ ] d) Query optimization

#### 42. In Cassandra, what does consistency level ONE mean?
- ✅ a) Only one replica must respond
- [ ] b) All replicas must respond
- [ ] c) Majority of replicas must respond
- [ ] d) No consistency guarantee

### **Apache HBase**

#### 43. What is the storage hierarchy in HBase from top to bottom?
- [ ] a) Table → Column Family → Row → Column
- ✅ b) Table → Row → Column Family → Column
- [ ] c) Row → Table → Column Family → Column
- [ ] d) Column Family → Table → Row → Column

#### 44. What is the purpose of Bloom filters in HBase?
- [ ] a) Data compression
- ✅ b) Reduce disk I/O by avoiding unnecessary block reads
- [ ] c) Data encryption
- [ ] d) Load balancing

#### 45. In HBase, what triggers automatic sharding (region splitting)?
- [ ] a) Time-based intervals
- [ ] b) Manual configuration
- ✅ c) Region size exceeding threshold
- [ ] d) Memory usage

#### 46. In HBase, what is a RegionServer responsible for?
- [ ] a) Metadata management
- ✅ b) Serving read/write requests for regions
- [ ] c) Load balancing
- [ ] d) Schema management

#### 47. In HBase, what is a column qualifier?
- [ ] a) The name of a column family
- ✅ b) The specific column name within a column family
- [ ] c) A row identifier
- [ ] d) A timestamp value

#### 48. Which of the following is true about HBase regions?
- [ ] a) They contain all columns for a table
- ✅ b) They store contiguous ranges of rows
- [ ] c) They are fixed in size
- [ ] d) They cannot be split

#### 49. What is the Write-Ahead Log (WAL) in HBase used for?
- [ ] a) Query optimization
- [ ] b) Data compression
- ✅ c) Durability and recovery
- [ ] d) Load balancing

### **Apache Zookeeper**

#### 50. What is the role of Zookeeper in HBase?
- [ ] a) Data storage
- ✅ b) Coordination service and configuration management
- [ ] c) Query processing
- [ ] d) Data compression

---

## 🌊 Week 5: Streaming & Kafka

### **Spark Streaming**

#### 51. In Spark Streaming, what is a sliding window?
- ✅ a) A fixed-size window that moves at regular intervals
- [ ] b) A window that grows infinitely
- [ ] c) A window that only captures recent data
- [ ] d) A static window that never changes

#### 52. If you have a sliding window of 30 seconds with a slide interval of 10 seconds, how often do you get results?
- [ ] a) Every 30 seconds
- ✅ b) Every 10 seconds
- [ ] c) Every 20 seconds
- [ ] d) Every 40 seconds

#### 53. Which of the following is a typical use case for Spark Streaming sliding windows?
- [ ] a) Batch processing historical data
- ✅ b) Real-time sentiment analysis of social media streams
- [ ] c) Static data analysis
- [ ] d) Database backups

#### 54. In a Twitter sentiment analysis case study using Spark Streaming, what would be the typical data flow?
- ✅ a) Twitter API → Kafka → Spark Streaming → Results
- [ ] b) Twitter API → HDFS → Spark Streaming → Results
- [ ] c) Twitter API → Spark Streaming → Kafka → Results
- [ ] d) Spark Streaming → Twitter API → Results

#### 55. In Spark Streaming, what is a microbatch?
- [ ] a) A small dataset
- ✅ b) A mini RDD created from stream data
- [ ] c) A configuration parameter
- [ ] d) A type of transformation

#### 56. In Spark Streaming, what determines the batch interval?
- [ ] a) Input data rate
- ✅ b) Application configuration
- [ ] c) Available memory
- [ ] d) Network latency

### **Apache Kafka**

#### 57. What is Apache Kafka primarily used for?
- [ ] a) Data storage
- [ ] b) Stream processing
- ✅ c) Message queuing and event streaming
- [ ] d) Machine learning

#### 58. What is a Kafka topic?
- [ ] a) A single message
- ✅ b) A category or feed of messages
- [ ] c) A consumer group
- [ ] d) A partition key

#### 59. In Kafka, what ensures message ordering within a partition?
- [ ] a) Timestamps
- [ ] b) Message keys
- ✅ c) Sequential offset assignment
- [ ] d) Consumer configuration

#### 60. What is the purpose of Kafka partitions?
- [ ] a) Data compression
- ✅ b) Parallel processing and scalability
- [ ] c) Message encryption
- [ ] d) Schema validation

#### 61. What happens if a Kafka consumer falls behind?
- [ ] a) Messages are lost
- [ ] b) Consumer is automatically restarted
- ✅ c) Messages accumulate until consumer catches up
- [ ] d) Partition is reassigned

#### 62. Which Kafka component maintains cluster membership?
- [ ] a) Broker
- [ ] b) Producer
- [ ] c) Consumer
- ✅ d) Zookeeper

#### 63. What is the default message retention policy in Kafka?
- [ ] a) 1 hour
- [ ] b) 24 hours
- ✅ c) 7 days
- [ ] d) Indefinite

---

## 🤖 Week 6-7: ML & Graph Processing

### **K-means Clustering**

#### 64. In MapReduce implementation of K-means, what happens in the Map phase?
- [ ] a) Calculate new centroids
- ✅ b) Assign points to nearest centroid
- [ ] c) Initialize centroids
- [ ] d) Output final clusters

#### 65. In MapReduce implementation of K-means, what happens in the Reduce phase?
- [ ] a) Assign points to clusters
- ✅ b) Calculate new centroids from assigned points
- [ ] c) Initialize random centroids
- [ ] d) Validate cluster quality

#### 66. What is an advantage of implementing K-means in Spark MLlib over MapReduce?
- [ ] a) Better accuracy
- ✅ b) In-memory computing reduces I/O overhead
- [ ] c) More clustering algorithms
- [ ] d) Automatic parameter tuning

#### 67. In the K-means algorithm, how is convergence typically determined?
- [ ] a) Fixed number of iterations
- ✅ b) Centroids stop moving significantly
- [ ] c) All points are assigned
- [ ] d) Error reaches zero

#### 68. What is the time complexity of one iteration of K-means with n points, k clusters, and d dimensions?
- [ ] a) O(n)
- ✅ b) O(nkd)
- [ ] c) O(n²)
- [ ] d) O(k²d)

#### 69. Which metric is commonly used to evaluate clustering quality in K-means?
- [ ] a) Accuracy
- ✅ b) Within-cluster sum of squares (WCSS)
- [ ] c) Precision
- [ ] d) F1-score

### **PageRank & Graph Processing**

#### 70. What does the PageRank algorithm measure?
- [ ] a) The loading speed of web pages
- ✅ b) The importance/authority of nodes in a graph
- [ ] c) The physical distance between nodes
- [ ] d) The data size of web pages

#### 71. In GraphX, how does PageRank handle the "random surfer" model?
- [ ] a) Users always follow links
- ✅ b) Users randomly jump to any page with some probability
- [ ] c) Users only visit popular pages
- [ ] d) Users follow a predetermined path

#### 72. What is the main advantage of Spark GraphX over traditional graph processing systems?
- [ ] a) Faster algorithms
- ✅ b) Unifies graph and data-parallel operations in one system
- [ ] c) Better visualization
- [ ] d) Lower memory usage

#### 73. In PageRank algorithm, what is the damping factor typically set to?
- [ ] a) 0.5
- [ ] b) 0.75
- ✅ c) 0.85
- [ ] d) 0.95

#### 74. Which operation in Spark GraphX is used to apply computations to vertices?
- [ ] a) mapEdges()
- ✅ b) mapVertices()
- [ ] c) aggregateMessages()
- [ ] d) joinVertices()

#### 75. In PageRank, what does a higher score indicate?
- [ ] a) Faster page loading
- ✅ b) More important or authoritative page
- [ ] c) Larger page size
- [ ] d) Recent updates

#### 76. What is the purpose of the random jump in PageRank?
- [ ] a) Add randomness to results
- [ ] b) Handle pages with no outgoing links
- [ ] c) Improve convergence
- ✅ d) All of the above

#### 77. In Spark MLlib, which algorithm is used for collaborative filtering?
- [ ] a) K-means
- ✅ b) ALS (Alternating Least Squares)
- [ ] c) PageRank
- [ ] d) Linear Regression

#### 78. What is the main advantage of using GraphX for graph processing?
- [ ] a) Better visualization
- ✅ b) Integration with Spark ecosystem
- [ ] c) Faster algorithms
- [ ] d) More graph algorithms

#### 79. In graph processing, what is vertex-centric programming?
- [ ] a) Processing all vertices simultaneously
- ✅ b) Each vertex processes local information
- [ ] c) Centralized vertex management
- [ ] d) Vertex-specific algorithms

---

## 🎯 Advanced Topics

### **Distributed Systems Concepts**

#### 80. What is data locality in distributed computing?
- [ ] a) Storing data in specific geographic locations
- ✅ b) Processing data where it's stored to minimize network traffic
- [ ] c) Using local databases only
- [ ] d) Encrypting data locally

#### 81. Which of the following best describes lambda architecture?
- [ ] a) Serverless computing model
- ✅ b) Batch + real-time processing layers
- [ ] c) Graph processing paradigm
- [ ] d) NoSQL design pattern

#### 82. What is the primary purpose of data serialization in distributed systems?
- [ ] a) Data compression
- ✅ b) Converting objects to transmittable format
- [ ] c) Data encryption
- [ ] d) Schema validation

#### 83. In distributed systems, what is idempotency?
- ✅ a) Operations produce same result when repeated
- [ ] b) Operations are atomic
- [ ] c) Operations are reversible
- [ ] d) Operations are distributed

#### 84. What is the main difference between horizontal and vertical scaling?
- [ ] a) Cost difference
- ✅ b) Adding more machines vs. upgrading existing machines
- [ ] c) Speed difference
- [ ] d) Reliability difference

#### 85. Which consistency model provides the strongest guarantees?
- [ ] a) Eventual consistency
- ✅ b) Strong consistency
- [ ] c) Weak consistency
- [ ] d) Causal consistency

#### 86. What is the purpose of checkpointing in stream processing?
- [ ] a) Data backup
- ✅ b) Fault tolerance and state recovery
- [ ] c) Performance monitoring
- [ ] d) Data validation

#### 87. In distributed computing, what is a hot spot?
- [ ] a) Temperature monitoring
- ✅ b) Uneven load distribution causing bottlenecks
- [ ] c) High-priority tasks
- [ ] d) Emergency situations

#### 88. Which of the following is true about eventual consistency?
- [ ] a) Guarantees immediate consistency
- ✅ b) Allows temporary inconsistencies but ensures eventual convergence
- [ ] c) Never achieves consistency
- [ ] d) Requires manual intervention

---

## 📈 Performance & Optimization

### **Storage & Processing Optimization**

#### 89. What is the main benefit of columnar storage formats like Parquet?
- [ ] a) Faster writes
- ✅ b) Better compression and analytical query performance
- [ ] c) Easier schema evolution
- [ ] d) Better security

#### 90. Which storage format is most suitable for write-heavy workloads?
- ✅ a) Row-based storage
- [ ] b) Columnar storage
- [ ] c) Graph storage
- [ ] d) Key-value storage

### **Additional Challenge Questions**

#### 91. What is the primary benefit of using Bloom filters in distributed systems?
- [ ] a) Data compression
- ✅ b) Probabilistic membership testing to reduce false positives
- [ ] c) Load balancing
- [ ] d) Data encryption

#### 92. In a distributed hash table, what is consistent hashing used for?
- [ ] a) Data encryption
- ✅ b) Minimizing data movement when nodes are added/removed
- [ ] c) Query optimization
- [ ] d) Backup management

#### 93. What is the difference between at-least-once and exactly-once delivery semantics?
- [ ] a) Performance difference
- ✅ b) Exactly-once prevents duplicate processing, at-least-once allows it
- [ ] c) Security difference
- [ ] d) No significant difference

#### 94. In stream processing, what is backpressure?
- [ ] a) Data compression technique
- ✅ b) Mechanism to handle slow consumers by slowing down producers
- [ ] c) Error recovery method
- [ ] d) Load balancing strategy

#### 95. What is the CAP theorem trade-off in network partitions?
- [ ] a) Choose between performance and security
- ✅ b) Choose between consistency and availability
- [ ] c) Choose between speed and accuracy
- [ ] d) Choose between cost and reliability

---

## 🔄 Mixed Cross-Topic Questions

### **Integration & Real-World Scenarios**

#### 96. In a typical Big Data pipeline using Hadoop ecosystem, what is the most common data flow?
- [ ] a) HDFS → Spark → Cassandra → Kafka
- ✅ b) Data Ingestion → HDFS → Spark/MapReduce → NoSQL/HDFS
- [ ] c) Kafka → HBase → Spark → HDFS
- [ ] d) Cassandra → Kafka → Spark → MongoDB

#### 97. Which combination provides the best solution for real-time analytics on streaming data?
- [ ] a) HDFS + MapReduce + HBase
- ✅ b) Kafka + Spark Streaming + Cassandra
- [ ] c) YARN + Secondary NameNode + CQL
- [ ] d) Zookeeper + Bloom Filters + PageRank

#### 98. When implementing a lambda architecture, which technologies would you typically use?
- [ ] a) Only Spark for both batch and streaming
- ✅ b) MapReduce/Spark for batch, Kafka/Spark Streaming for real-time
- [ ] c) Only Cassandra for all processing
- [ ] d) HDFS for streaming, Kafka for batch

#### 99. In a distributed system handling both OLTP and OLAP workloads, which storage combination is optimal?
- [ ] a) Only columnar storage for everything
- ✅ b) Row-based for OLTP, columnar for OLAP
- [ ] c) Only row-based storage for everything
- [ ] d) Graph storage for both workloads

#### 100. For a social media analytics platform processing user interactions, which architecture is most suitable?
- ✅ a) Kafka → Spark Streaming → Cassandra + HDFS → Spark MLlib → GraphX
- [ ] b) HDFS → MapReduce → MongoDB → SQL Analytics
- [ ] c) HBase → YARN → Secondary NameNode → CQL
- [ ] d) Zookeeper → Bloom Filters → K-means → Traditional RDBMS

### **Performance & Optimization Scenarios**

#### 101. If your Spark application is experiencing frequent shuffling operations, which optimization would be most effective?
- [ ] a) Increase HDFS replication factor
- ✅ b) Use reduceByKey() instead of groupByKey() and optimize partitioning
- [ ] c) Switch from Kafka to HBase
- [ ] d) Implement stronger consistency in Cassandra

#### 102. In a scenario where Kafka consumers are consistently lagging behind producers, what is the best approach?
- [ ] a) Reduce HDFS block size
- [ ] b) Increase Cassandra consistency level
- ✅ c) Scale out consumers and optimize partition assignment
- [ ] d) Switch to synchronous replication in HDFS

#### 103. For a use case requiring both fast writes and complex analytics, which combination is optimal?
- ✅ a) Cassandra for writes + Spark for analytics + Parquet for storage
- [ ] b) HDFS for writes + MapReduce for analytics + Row storage
- [ ] c) HBase for writes + SQL for analytics + Text files
- [ ] d) MongoDB for writes + Pig for analytics + JSON storage

#### 104. When dealing with hot spots in a distributed system, which strategies are most effective?
- [ ] a) Increase replication factor and use eventual consistency
- ✅ b) Implement consistent hashing and data locality optimization
- [ ] c) Use stronger consistency models and centralized coordination
- [ ] d) Reduce partition count and increase block size

### **Fault Tolerance & Reliability**

#### 105. In a Big Data system, if both NameNode and a Kafka broker fail simultaneously, what happens?
- [ ] a) Complete system failure requiring restart
- ✅ b) HDFS becomes unavailable, Kafka continues with remaining brokers
- [ ] c) Kafka fails, HDFS continues normally
- [ ] d) Both systems continue with automatic failover

#### 106. Which combination provides the strongest fault tolerance guarantees?
- [ ] a) Single NameNode + Kafka with 1 replica + Eventual consistency
- ✅ b) HA NameNode + Kafka with 3 replicas + Appropriate consistency levels
- [ ] c) Secondary NameNode + Single Kafka broker + Strong consistency
- [ ] d) No backup systems + Manual recovery procedures

#### 107. For a mission-critical application requiring exactly-once processing, which setup is most appropriate?
- [ ] a) At-least-once Kafka + Idempotent operations + No deduplication
- ✅ b) Exactly-once Kafka + Idempotent Spark operations + Transactional writes
- [ ] c) At-most-once delivery + Non-idempotent operations + Manual recovery
- [ ] d) Best-effort delivery + No consistency guarantees

### **Data Modeling & Schema Design**

#### 108. When designing a schema for time-series data in Cassandra that will be analyzed using Spark, what is the optimal approach?
- ✅ a) Partition by time bucket + clustering by timestamp + denormalized design
- [ ] b) Single large partition + normalized schema + secondary indexes
- [ ] c) Random partitioning + complex joins + ACID transactions
- [ ] d) Graph-based schema + recursive queries + strong consistency

#### 109. For a recommendation system using collaborative filtering, which data flow is most efficient?
- [ ] a) HDFS → HBase → Manual feature extraction → Traditional ML
- ✅ b) HDFS/Kafka → Spark → MLlib ALS → Real-time serving layer
- [ ] c) Cassandra → MapReduce → Custom algorithms → Batch predictions
- [ ] d) MongoDB → Single-node processing → Rule-based recommendations

#### 110. When storing both structured transaction data and unstructured user behavior data, which approach is best?
- [ ] a) Store everything in HDFS with same format
- ✅ b) Structured data in Cassandra/HBase, unstructured in HDFS, unified processing in Spark
- [ ] c) Convert all data to same schema in single database
- [ ] d) Use only NoSQL databases for everything

### **Scalability & Growth Scenarios**

#### 111. Your current system handles 1TB/day but needs to scale to 100TB/day. Which upgrade path is most appropriate?
- [ ] a) Vertical scaling of existing single-node system
- [ ] b) Add more HDFS replicas without changing architecture
- ✅ c) Horizontal scaling with distributed processing and storage systems
- [ ] d) Switch to traditional RDBMS with better hardware

#### 112. For a global application with users in multiple continents, which architecture provides best performance?
- [ ] a) Single centralized cluster in one data center
- ✅ b) Distributed clusters with data locality and cross-region replication
- [ ] c) Cloud-only solution without data locality considerations
- [ ] d) Manual data synchronization between regions

#### 113. When query response times degrade as data volume increases, which optimization is most effective?
- [ ] a) Increase hardware specs of single machines
- [ ] b) Add more random secondary indexes
- ✅ c) Implement data partitioning, caching, and query optimization
- [ ] d) Switch to synchronous replication everywhere

### **Technology Selection & Trade-offs**

#### 114. For a startup with limited resources that needs both batch and stream processing, which is the most cost-effective approach?
- [ ] a) Separate specialized systems for each use case
- ✅ b) Unified platform like Spark for both batch and streaming
- [ ] c) Cloud-based managed services for everything
- [ ] d) Build custom solutions from scratch

#### 115. When choosing between strong consistency and high availability in a distributed e-commerce system, which factors are most critical?
- [ ] a) Always choose strong consistency regardless of cost
- [ ] b) Always choose availability regardless of data accuracy
- ✅ c) Balance based on business requirements - strong consistency for payments, eventual for recommendations
- [ ] d) Use manual conflict resolution for all scenarios

#### 116. For machine learning workloads on big data, which storage format provides the best performance?
- [ ] a) Plain text files for simplicity
- [ ] b) JSON for flexibility
- ✅ c) Columnar formats like Parquet for analytical workloads
- [ ] d) Binary formats without compression

### **Security & Compliance**

#### 117. In a GDPR-compliant big data system, which approach best handles "right to be forgotten" requests?
- [ ] a) Ignore the requirement as data is too distributed
- [ ] b) Manually search and delete across all systems
- ✅ c) Design with data lineage tracking and automated deletion capabilities
- [ ] d) Store all data in single location for easy deletion

#### 118. For sensitive financial data processing, which combination provides best security?
- [ ] a) Plain text storage with network security only
- ✅ b) Encryption at rest and in transit + fine-grained access controls + audit logging
- [ ] c) Security through obscurity and complex passwords
- [ ] d) Single strong password for all system access

### **Monitoring & Operations**

#### 119. For monitoring a complex big data pipeline, which metrics are most critical to track?
- [ ] a) Only system CPU and memory usage
- [ ] b) Only data volume and processing speed
- ✅ c) End-to-end latency, data quality, resource utilization, and error rates
- [ ] d) Only business KPIs without technical metrics

#### 120. When a Spark job fails in a production pipeline, what is the most efficient debugging approach?
- [ ] a) Restart the entire cluster and hope it works
- [ ] b) Check only the final error message
- ✅ c) Analyze Spark UI, logs, lineage, and resource metrics systematically
- [ ] d) Blame the data quality and skip processing

---

## 🧠 Advanced Integration Scenarios

### **Complex System Design**

#### 121. Design a real-time fraud detection system. Which architecture would you choose?
- ✅ a) Kafka → Spark Streaming → MLlib → Cassandra → Real-time API
- [ ] b) HDFS → MapReduce → HBase → Batch reporting
- [ ] c) Single database → Stored procedures → Manual review
- [ ] d) File-based processing → Email alerts → Manual intervention

#### 122. For a IoT sensor data pipeline processing millions of events per second, which bottleneck is most likely?
- [ ] a) HDFS storage capacity
- [ ] b) Cassandra read performance
- ✅ c) Kafka throughput and Spark Streaming processing capacity
- [ ] d) Network bandwidth between data centers

#### 123. In a multi-tenant big data platform, which isolation strategy is most effective?
- [ ] a) Single shared cluster with no isolation
- [ ] b) Completely separate clusters per tenant
- ✅ c) Resource quotas + namespace isolation + network segmentation
- [ ] d) Manual coordination between tenants

#### 124. For a recommendation engine that needs to update in real-time as users interact, which approach works best?
- [ ] a) Batch recomputation every hour using MapReduce
- ✅ b) Streaming updates with Kafka → Spark Streaming → Online ML serving
- [ ] c) Manual feature engineering and rule-based recommendations
- [ ] d) Single-node system with in-memory processing

### **Data Pipeline Optimization**

#### 125. Your ETL pipeline processes 10TB daily but takes 8 hours. Which optimization would provide the biggest improvement?
- [ ] a) Increase HDFS replication factor to 5
- [ ] b) Switch from Cassandra to MongoDB
- ✅ c) Optimize Spark job parallelism and data locality
- [ ] d) Add more Zookeeper nodes

#### 126. For a data lake with both structured and unstructured data, which query engine strategy is optimal?
- [ ] a) Use only SQL engines for everything
- [ ] b) Use only NoSQL engines for everything
- ✅ c) Unified query engine like Spark SQL with format-specific optimizations
- [ ] d) Separate tools for each data type with manual integration

#### 127. When data skew causes some Spark partitions to process much more data than others, which solution is most effective?
- [ ] a) Increase overall cluster size
- [ ] b) Use fewer partitions to balance load
- ✅ c) Implement custom partitioning and data preprocessing
- [ ] d) Switch to MapReduce for better load balancing

### **Disaster Recovery & Business Continuity**

#### 128. For a critical business application, which backup and recovery strategy is most robust?
- [ ] a) Single backup copy in same data center
- [ ] b) Manual backups performed weekly
- ✅ c) Multi-region replication + automated failover + regular recovery testing
- [ ] d) Hope that distributed systems never fail completely

#### 129. During a major data center outage, which system design enables fastest recovery?
- [ ] a) Single active data center with cold backup
- ✅ b) Active-active setup with automatic failover and data synchronization
- [ ] c) Manual procedures for switching to backup systems
- [ ] d) Restore everything from tape backups

#### 130. For ensuring data consistency across multiple systems during failure scenarios, which approach is most reliable?
- [ ] a) Eventual consistency everywhere with manual reconciliation
- [ ] b) Strong consistency everywhere regardless of performance impact
- ✅ c) Transactional boundaries with appropriate consistency levels per use case
- [ ] d) Best-effort approaches with no consistency guarantees

---

## 📊 Answer Key Summary

| Category | Questions | Focus Areas |
|----------|-----------|-------------|
| Week 1-2 | 1-16 | Big Data V's, HDFS, YARN |
| Week 3 | 17-33 | Spark RDDs, CAP Theorem |
| Week 4 | 34-50 | Cassandra, HBase, Zookeeper |
| Week 5 | 51-63 | Streaming, Kafka |
| Week 6-7 | 64-79 | K-means, PageRank, GraphX |
| Advanced | 80-95 | Distributed Systems, Optimization |
| **Mixed Topics** | **96-130** | **Cross-platform Integration, Real-world Scenarios** |

---

## 🎯 Quick Reference

### **Integration Patterns:**
- **Lambda Architecture:** Batch (MapReduce/Spark) + Real-time (Kafka/Spark Streaming)
- **Data Pipeline:** Ingestion → Storage → Processing → Serving
- **Microservices:** Kafka for messaging, Cassandra for state, Spark for processing

### **Performance Optimization:**
- **Spark:** Use reduceByKey() over groupByKey(), optimize partitioning
- **Kafka:** Scale consumers, optimize partition assignment
- **Storage:** Columnar for analytics, row-based for OLTP

### **Fault Tolerance Best Practices:**
- **Replication:** HDFS (3x), Kafka (3x), Cassandra (3x)
- **Consistency:** Choose appropriate levels per use case
- **Recovery:** Automated failover + regular testing

---

*📝 Total Questions: 130 | Coverage: Complete Big Data ecosystem with real-world integration scenarios*

---

